#include<stdio.h>

int main()
{
    int arr[50],i,min=99999,max=-99999;

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<5;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    for(i=0;i<5;i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Max: %d\nMin: %d",max,min);
}
