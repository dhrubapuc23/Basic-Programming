#include<stdio.h>

int main()
{
    int num,flag,i,k;
    scanf("%d",&num);

    printf("Prime Numbers are: ");
    for(k=2; k<=num; k++)
    {
        flag = 0;
        for(i=2; i<k; i++)
       {
          if(k % i == 0)
         {
            flag=1;
         }
       }

       if(flag==0)
        printf("%d ",k);
    }

}
