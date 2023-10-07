#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter the no. \n");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of num %d=%d",num,fact);
    return 0;

}
