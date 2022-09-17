#include<stdio.h>

int main()
{
    int var1 = 10,var2 = 20, *a,*b;

    a = &var1;
    b = &var2;


    printf("Sum: %d",*a+*b);
    /**printf("ptr - %d\n",*ptr);
    printf("a - %x\n",&a);
    printf("Value - %d",a);**/
}
