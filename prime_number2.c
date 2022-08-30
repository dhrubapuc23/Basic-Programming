#include<stdio.h>

int main()
{
    int num,i,t,j;
    scanf("%d",&num);

    printf("The prime numbers are: ");

    for(i=2;i<=num;i++)
    {
        t=0;
        for(j=2;j<i;j++)
        {
              if(i%j == 0)
            {
                t = 1;
                break;
            }
        }
        if(t==0)
          printf("%d ",i);

    }


}
