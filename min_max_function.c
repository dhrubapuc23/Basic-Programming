#include<stdio.h>
///int findMax(int[],int);
int printOdd(int[],int);
int n;
int main()
{
    int arr[50],i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    /**int res = findMax(arr,0);
    printf("Maximum value: %d",res);**/
    printOdd(arr,0);

}


int printOdd(int arr[],int i)
{
    if(i == n)
        return 0;
    else
    {
        if(arr[i] % 2 == 1)
            printf("%d ",arr[i]);
        i++;
        printOdd(arr,i);
    }
}

/*int findMax(int arr[],int i)
{
    static int max = -99999;
    if(i == n)
        return max;
    else
    {
        if(arr[i]>max)
            max = arr[i];
        i++;
        return findMax(arr,i);
    }
}*/
