#include<stdio.h>

int main()
{
    int arr[50],i,j,t,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    ///Sort
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("\nSorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\n The second max element: %d",arr[n-2]);
}
