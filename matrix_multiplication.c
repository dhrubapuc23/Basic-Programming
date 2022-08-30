#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,i,j,k;
    scanf("%d %d %d %d",&r1, &c1, &r2, &c2);

    if(r1 != c2)
        printf("matrix multiplication is not possible!");
    else
    {
    int A[r1][c1], B[r2][c2], C[r1][c2];
    printf("\nEnter A matrix: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter B matrix: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j] = 0;
            for(k=0;k<c1;k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }

    printf("\nResult: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    }

}
