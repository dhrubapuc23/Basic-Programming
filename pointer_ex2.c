#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},*a,*b,*c;

    a = &arr[2];
    b = arr+2;
    c = &arr[6];

    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

    if(a==b)
        printf("Equal!");

}
