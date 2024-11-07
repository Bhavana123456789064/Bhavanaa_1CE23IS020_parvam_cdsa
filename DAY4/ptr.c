#include<stdio.h>
int main()
{
    int x=-99,*ptr=&x;
    printf("value of var is %d address of var is %p",x,&x);
    printf("\ntar value of ptr is %d tar add of ptr is %p",*ptr,ptr,&ptr);
    return 0;
}