#include<stdio.h>

int main()
{
    int range,f1=0,f2=1,f3,i;
    scanf("%d",&range);

    printf("%d %d ",f1,f2);
    for(i=0;i<range-2;i++)
    {
        f3 = f1 + f2;
        printf("%d ",f3);
        f1 = f2;
        f2 = f3;
    }
}
