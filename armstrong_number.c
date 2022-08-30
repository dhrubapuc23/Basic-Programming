#include<stdio.h>

int main()
{
    int num,t1,t2,d=0,res=0;
    scanf("%d",&num);

    t1=t2=num;

    while(t1 != 0)
    {
        t1=t1/10;
        d++;
    }

    while(t2!=0)
    {
        int rem = t2%10;
        res = res + pow(rem,d);
        t2/=10;
    }

    if(num == res)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

}
