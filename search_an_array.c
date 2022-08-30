#include<stdio.h>

int main()
{
    int arr[100], val, i,flag=0,cnt=0,f_index,l_index;

    printf("Enter the array: ");

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter the value to search: ");
    scanf("%d",&val);

    for(i=0;i<5;i++)
    {
        if(arr[i] == val)
        {
            cnt++;
            if(cnt == 1)
            {
                f_index = i;
            }
            l_index = i;
        }

    }

    if(cnt > 0)
    {
        printf("value found!\n");
        printf("\nNumber of occurance: %d",cnt);
        printf("\nFirst Index: %d",f_index);
        printf("\nLast Index: %d",l_index);
    }

    else
        printf("Value not found!\n");



}
