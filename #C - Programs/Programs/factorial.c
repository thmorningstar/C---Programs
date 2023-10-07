#include<stdio.h>

void main()
{
    int num, fact=1,i;

printf("Enter the number \n");
scanf("%d",&num);

for(i=num;i>1;i--)
{
    fact=fact*i;
}
    printf("Factorial od the %d is %d \n",num,fact);
}

