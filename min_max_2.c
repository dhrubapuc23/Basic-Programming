#include<stdio.h>

int findMax(int,int);
int findMin(int,int);

int main()
{
    int a,b,max,min;
    scanf("%d %d",&a,&b);

    max = findMax(a,b);
    min = findMin(a,b);

    printf("Max: %d\nMin: %d",max,min);
}

int findMax(int num1, int num2)
{
    int max;
    if(num1>num2)
        max = num1;
    else
        max = num2;

    return max;
}

int findMin(int num1, int num2)
{
    int min;
    if(num1<num2)
        min = num1;
    else
        min = num2;

    return min;
}
