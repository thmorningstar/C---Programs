#include<stdio.h>
#define Row 3
#define Col 3

int main()
{
    int mat[Row][Col] ,i,j;
printf("Enter the elements of Matrix [%d * %d] \n",Row,Col);

for(i=0;i<Row;i++)
{
    for(j=0;j<Col;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
printf("[%d * %d] Matrix is : \n",Row,Col);

for(i=0;i<Row;i++)
{
    for(j=0;j<Col;j++)
    {
        printf("%d  ",mat[i][j]);
    }

    printf("\n");
}


}