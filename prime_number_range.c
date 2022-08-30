#include<stdio.h>
#include<stdbool.h>
bool isPrime(int);


int main()
{
    int n,i;
    scanf("%d",&n);
    printf("The prime numbers are: ");
    for(i=2;i<=n;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }

}

bool isPrime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0)
        return true;
    else
        return false;
}
