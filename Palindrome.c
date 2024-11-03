#include<stdio.h>

int main()
{

int num,rem,rev=0,m;

printf("Enter the number \n");
scanf("%d",&num);

m=num;

while(num>0)
{

rem=num%10;
rev=rev*10+rem;
num=num/10;

}

if(m==rev)
{
    printf("The number is Palindrome \n");
}
 else
 {
    printf("Not a palindrome number \n");
 }

 return 0;

}