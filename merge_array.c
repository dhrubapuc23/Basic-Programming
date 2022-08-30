#include<stdio.h>

int main()
{
    int n,m,k=0,i;
    printf("Enter the size of array A: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the size of array B: ");
    scanf("%d",&m);
    int A[n],B[m], C[n+m+1];

    printf("\nEnter the elements of Array A: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    printf("\nEnter the elements of Array B: ");
    for(i=0;i<m;i++)
        scanf("%d",&B[i]);

    ///Merge
    for(i=0;i<n;i++)
        C[k++] = A[i];

    for(i=0;i<m;i++)
        C[k++] = B[i];

    ///print merged array
    printf("\n The merged array: ");
    for(i=0;i<(n+m);i++)
        printf("%d ",C[i]);








}
