#include<stdio.h>
#define N 50
int main()
{
    int arr[N],n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
            {
                int t;
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
     printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nSecond largest element: %d",arr[n-2]);

}
