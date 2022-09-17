#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5},*ptr,i,j;

    ptr = &arr[0];

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(*(ptr+i) < *(ptr+j))
            {
                int t = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = t;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

    ///printf("%d",*(ptr+2));

}
