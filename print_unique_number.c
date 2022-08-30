#include<stdio.h>

int main()
{
    int arr[5000]={0},val,n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        arr[val]= arr[val]+1;
    }
    printf("\n Unique numbers are: ");
    for(i=0;i<5000;i++)
    {
        if(arr[i]>0)
        printf("%d ",i);
    }

}
