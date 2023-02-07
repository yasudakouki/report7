#include<stdio.h>

void print_array(int array[], int size);
void print_array(int array[], int size){
    printf("scores = ");
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};

    //処理コード
    print_array(scores, SIZE);
    return 0;
}
