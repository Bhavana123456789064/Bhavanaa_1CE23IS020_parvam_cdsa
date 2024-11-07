#include<stdio.h>
int sod();
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("Sum of digit:%d",sod(n));
    return 0;
}
int sod(int n)
{
    if(n<=0)return 0;
    if(n==1)return 1;
    return (n%10)+sod(n/10);
}