#include<stdio.h>
int main()
{
    int num[10],a;
    int n,i,j;
    printf("Enter the no of elements:");
    scanf("%d",&n);

    printf("Enter numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    
    printf("The numbers in ascending order: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",num[i]);
    }
}