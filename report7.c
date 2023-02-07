#include<stdio.h>
#include <stdlib.h>

void print_array(int array[], int size);
void print_array(int array[], int size){
    printf("scores = ");
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void sort_array(int array[], int size);
void sort_array(int array[], int size) {
    // 例外処理
    if(size < 2) {
        printf("指定された配列はご利用になれません\n");
        printf("配列の要素数は2個以上にしてください\n");
        exit(1);
    }
    for(int i=0; i<size; i++) {
        if(array[i] < 0 || 100 < array[i]) {
            printf("指定された配列はご利用になれません\n");
            printf("点数は、0〜100の間の整数にしてください\n");
            exit(1);
        }
    }

    // 配列の並べ替え
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(array[i] < array[j]) {
                int num = array[i];
                array[i] = array[j];
                array[j] = num;
            }
        }
    }
    printf("results = ");
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    //処理コード
    print_array(scores, SIZE);
    sort_array(scores, SIZE);

    return 0;
}
