#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    switch(num>0)
    {
        case 1: printf("Positive");
                break;

        case 0: switch(num<0)
                {
                    case 1: printf("Negative");
                            break;

                    case 0: printf("Zero");
                            break;

                }

    }
}
