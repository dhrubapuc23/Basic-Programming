#include<stdio.h>

int main()
{
    int num,sum=0,rem,i=1;

    scanf("%d",&num);

    while(num!=0)
    {
        rem = num % 2;
        sum = sum + (rem * i);
        i = i * 10;
        num = num / 2;
    }

   /* while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * pow(2,i));
        num = num/10;
        i++;
    }*/

    printf("%d",sum);
}
