#include<stdio.h>

int main()
{
    int a,b,min,i,gcd,lcm;

    scanf("%d %d",&a,&b);

    min = a < b? a: b;

    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    lcm = a*b/gcd;

    printf("%d %d",gcd,lcm);
}
