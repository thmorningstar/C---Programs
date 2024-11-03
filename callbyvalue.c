#include<stdio.h>

int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}

int main();

{
    int a,b,z;
    printf("Enter the numbers: \n");
    scanf("%d%d",&a,&b);
    z=sum(a,b);
    printf("Sum of the numbers are:%d\n",z);
    return 0;
}
