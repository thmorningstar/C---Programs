#include<stdio.h>

void main()
{
    int a,b,temp;
    int *p,*q,*r;

    p=&a;
    q=&b;
    r=&temp;

    printf("Enter the numbers \n");
    scanf("%d%d",p,q);

    printf("a=%d and b=%d \n",*p,*q);

    r=p;
    p=q;
    q=r;

    printf("Swapped No. a=%d and b=%d \n",*p,*q);

}