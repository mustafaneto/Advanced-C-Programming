#include <stdio.h>
#include <stdlib.h>

int *createArray(int tamanho) {
    int i;
    int *myArr;

    myArr = (int*)malloc(sizeof(int)*tamanho);

    printf("Enter %d elements to your array.\n", tamanho);
    for(i=0; i<tamanho;i++){
        printf("Enter number %d: ", i);
        scanf("%d", &myArr[i]);
    }

    return myArr;
}

void printArr(int *arr, int size) {
    int i;
    for(i=0;i<size;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr;
    int tamanho;
    scanf("%d", &tamanho);
    arr = createArray(tamanho);
    printArr(arr,tamanho);
}
