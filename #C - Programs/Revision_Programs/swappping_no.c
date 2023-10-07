#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("Enter the first no: \n");
    scanf("%d",&a);
    printf("Enter the second no: \n");
    scanf("%d",&b);
    swap=a;
    a=b;
    b=swap;
    printf("The numbers after swapping:a=%d and b=%d",a,b);
    return 0;

}