#include<stdio.h>
int main()
{
    int a,b,c;
    int *p=&a,*q=&b,*r=&c;

    printf("Enter the numbers \n");
    scanf("%d%d",p,q);
    r=p;
    p=q;
    q=r;
    printf("Numbers after swapping:%d and %d",*p,*q);
    return 0;


}