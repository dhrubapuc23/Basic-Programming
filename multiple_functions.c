#include<stdio.h>
#include<stdbool.h>

bool isPrime(int);
bool isArmstrong(int);
bool isPerfect(int);
int main()
{
    int num;
    scanf("%d",&num);
    if(isPrime(num))
        printf("%d is a prime number!",num);
    else
        printf("Not a prime number");
}

bool isPrime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            flag = 1;
    }

    if(flag==0)
        return true;
    else
        return false;
}
