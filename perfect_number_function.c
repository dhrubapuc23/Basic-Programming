#include<stdio.h>
#include<stdbool.h>

bool isPerfect(int);
bool isPrime(int);

bool isPerfect(int n)
{
    int sum=0,i;

    for(i=1;i<n;i++)
    {
        if(n % i == 0)
            sum+=i;
    }

    if(n == sum)
        return true;
    else
        return false;
}

bool isPrime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }

    }
    if(flag == 0)
        return true;
    else
        return false;
}
int main()
{
    int num,i;
    scanf("%d",&num);
    printf("The perfect numbers are: ");
    for(i=1;i<=num;i++)
    {
        if(isPerfect(i))
           printf("%d ",i);
    }

    printf("\nThe prime numbers are: ");
    for(i=2;i<=num;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }

}1






