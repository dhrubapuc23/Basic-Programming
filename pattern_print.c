#include<stdio.h>

int main()
{
    int n,i,j,k;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }

        printf("\n");
    }
}
