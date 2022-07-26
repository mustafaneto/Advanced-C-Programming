#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapFunction(int *pNum1, int *pNum2) {
    int temp;
    temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

void genericSwap(void* a, void* b, int size) {
    void* tempMemory = malloc(size);

    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);
}

int main() {
    int n1, n2;
    scanf("%d%d",&n1,&n2);
    printf("primeiro: %d\n", n1);
    printf("segundo: %d\n", n2);
    swapFunction(&n1, &n2);
    printf("primeiro: %d\n", n1);
    printf("segundo: %d\n", n2);

    double average1 = 90.5, average2=89.7;
    printf("primeiro: %lf\n", average1);
    printf("segundo: %lf\n", average2);
    genericSwap(&average1, &average2, sizeof(double));
    printf("primeiro: %lf\n", average1);
    printf("segundo: %lf\n", average2);
}
