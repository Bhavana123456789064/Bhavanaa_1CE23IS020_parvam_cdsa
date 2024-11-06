#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0)
        printf("it is divisible");
    else
        printf("it is not divisible");
    return 0;
}