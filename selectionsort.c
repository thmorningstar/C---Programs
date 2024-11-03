#include<stdio.h>
#define size 10

int a[size],i,j,num,temp;
int indexofMin;

void printarry(int *A)
{
    printf("Elements of the Array are : \n");

    for(i=0;i<num;i++)
    {
        printf("%d \n",a[i]);
    }
}

void Aftersort(int *A)
{
    printf("Sorted Elements of the Array are : \n");

    for(i=0;i<num;i++)
    {
        printf("%d \n",a[i]);
    }
}


void selectionsort(int *A)
{
    for(i=0;i<num;i++)
    {
        indexofMin=i;

        for(j=i+1;j<num;j++)
        {
            temp=A[indexofMin];
            A[indexofMin]=A[j];
            A[j]=temp;
        }
    }
}

void main()
{
    printf("Enter the no. of element \n");
    scanf("%d",&num);

    printf("Enter the elements of Arrar \n");

    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }

    printarry(a);
    selectionsort(a);
    Aftersort(a);


}