#include<stdio.h>
int main()
{
    int mat[2][2],i,j;
    printf("Enter the elements of matrix(%dx%d): \n",2,2);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]);
        }

    }

    printf("The matrix you have entered: \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d   ",mat[i][j]);
            }
        printf("\n");

        }

    return 0;
}