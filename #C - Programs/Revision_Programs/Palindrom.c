#include<stdio.h>
int main()
{
        int num,rev=0,rem,m;
        printf("Enter the number: \n");
        scanf("%d",&num);
        m=num;
        while(num>0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(rev==m)
        {
            printf("Entered number is Palindrome");
        }
        else
            {
                printf("Entered number is not Palindrome");
            }
    
    return 0;

            
}