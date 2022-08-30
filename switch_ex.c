#include<stdio.h>

int main()
{
    int a,b,c,D,x1,x2,R,I;
    scanf("%d %d %d",&a,&b,&c);

    D = b*b - 4*a*c;

    switch(D>0)
    {
    case 1: x1 = (-b + sqrt(D))/2*a;
            x2 = (-b - sqrt(D))/2*a;

            printf("X1 = %d\nX2 = %d",x1,x2);
            break;

    case 0: switch(D < 0)
           {
                case 1: R = -b/2*a;
                        I = sqrt(-D)/2*a;

                        printf("%d + i%d\n%d - i%d",R,I,R,I);
                        break;

                case 0: x1 = -b/2*a;
                        printf("X1 = %d\nX2 = %d",x1,x1);
                        break;

           }
    }

}
