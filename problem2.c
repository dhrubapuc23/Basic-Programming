#include<stdio.h>
#include<math.h>
int main()
{
    int num,digit=0,sum=0,temp,temp2;
    scanf("%d",&num);

    temp = temp2 = num;

    while(temp != 0)
    {
        digit++;
        temp/=10;
    }

    while(temp2 != 0)
    {
        int rem = temp2 % 10;
        sum = sum + pow(rem,digit);
        temp2/=10;

    }

    if(sum == num)
        printf("Armstrong Number!");
    else
        printf("Not Armstrong Number!");



}
