#include<stdio.h>

int main()
{
    int num,i=1,sum=0,rem;
    scanf("%d",&num);

    while(num != 0)
    {
        rem = num % 2;
        sum += (rem * i);
        i *= 10;
        num/=2;
    }

    printf("%d",sum);
}
