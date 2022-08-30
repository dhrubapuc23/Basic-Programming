#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum,i,j;
    scanf("%d",&num);

    for(j=1;j<=num;j++) {
            sum=0;
    for(i=1;i<j;i++)
    {
        if(j % i == 0)
        {
            sum += i;
        }
    }

    if(sum == j)
        printf("%d ",sum);
    }






}








