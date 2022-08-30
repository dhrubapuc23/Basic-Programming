#include<stdio.h>

int main()
{
    int arr[50],odd_cnt=0,even_cnt=0,neg_cnt=0,i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            neg_cnt++;
        }
        else
        {
            if(arr[i] % 2 == 0)
                even_cnt++;
            else
                odd_cnt++;
        }
    }

    printf("\nNegative count: %d\nOdd count: %d\nEven count: %d",
           neg_cnt,odd_cnt,even_cnt);
}
