#include<stdio.h>

int main()
{
    int m,n,i,j,k=0;

    scanf("%d %d",&m,&n);

    int A[m], B[n], C[m+n+1];

    printf("Enter Array A: ");
    for(i=0;i<m;i++)
        scanf("%d",&A[i]);

    printf("\nEnter Array B: ");
    for(j=0;j<n;j++)
        scanf("%d",&B[j]);

    for(i=0;i<m;i++)
    {
        C[k] = A[i];
        k++;
    }

    for(j=0;j<n;j++)
    {
        C[k] = B[j];
        k++;
    }

    printf("\nMerged array: ");
    for(k=0;k<(m+n);k++)
        printf("%d ",C[k]);
}
