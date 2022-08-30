#include<stdio.h>

int main()
{
    int arr[100],n,i,odd_cnt=0,even_cnt=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i] % 2 == 1)
            odd_cnt++;
        else
            even_cnt++;
    }

    printf("Even %d\nOdd %d",even_cnt,odd_cnt);


}
