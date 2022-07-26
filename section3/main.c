#include <stdio.h>
#include <stdlib.h>

int main()
{

int *ptr;
int grades[3] = {80,90,100};
printf("grades start at: %p\n", grades);
printf("grades: %d", *grades);

int num = 30;
int *p;
printf("%d\n", num);
p=&num;
printf("%p\n", &num);
printf("%d\n", p);
*p=20;
printf("%d\n",num);
printf("%d", sizeof(p));


}
