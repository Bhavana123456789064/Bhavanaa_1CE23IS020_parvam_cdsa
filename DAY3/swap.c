#include<stdio.h>
int main()
{
    int x=10,y=2,temp=0;
    printf("before swap x=%d y=%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("before swap x=%d y=%d",x,y);
    return 0;
}