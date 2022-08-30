#include<stdio.h>

int main()
{
    int num,result,result1,result2,fd,ld,digit=0,tmp,cal;

    scanf("%d",&num);
    tmp = num;
    while(tmp!=0)
    {
        tmp = tmp /10;
        digit++;
    }

    cal = pow(10, digit - 1);

    ld = num % 10;
    fd = num / cal;

    result1 = num % cal;
    result2 = ld * cal;

    result = result1 + result2;
    result = result - ld;
    result = result + fd;

    printf("%d", result);

}
