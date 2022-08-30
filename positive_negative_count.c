#include<stdio.h>

int main()
{
    int arr[50],n,i,odd_cnt=0,even_cnt=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even_cnt++;
        else
            odd_cnt++;
    }

    printf("Even count: %d\nOdd count: %d",even_cnt,odd_cnt);

}
