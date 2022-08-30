#include<stdio.h>

int main()
{
    int a,b,c,x1,x2,det;
    scanf("%d %d %d",&a, &b, &c);

    det = b*b - 4*a*c;

    if(det == 0)
    {
        x1 = x2 = -b/2*a;
        printf("x1 = %d\tx2 = %d",x1,x2);
    }

    else if(det > 0)
    {
        x1 = (-b + sqrt(det))/2*a;
        x2 = (-b - sqrt(det))/2*a;
        printf("x1 = %d\tx2 = %d",x1,x2);
    }

    else
    {
        int real,img;
        real = -b/2*a;
        img = sqrt(-det)/2*a;
        //x1 = real + img;
        //x2 = real - img;

        printf("%d + i%d\n",real,img);
        printf("%d - i%d",real,img);
    }
}









