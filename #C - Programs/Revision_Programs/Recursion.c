#include<stdio.h>

int fact(int num);

int main()

{
    int num;
    printf("Enter a number for Factorial\n");
    scanf("%d",&num);

    printf("Factorial is %d is %d",num,fact(num));
    return 0;
}

int fact(int num)
{
    printf("Calling factorial(%d)\n",num);
    if(num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
