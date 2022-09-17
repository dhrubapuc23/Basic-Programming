#include<stdio.h>

int main()
{
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int i,j;

    //*p = a;
    //p = a;
    *(*(a+1)+2) = 77;
    for(i=0;i<3;i++)
    {
        printf("%d\t",*(a+i));
        for(j=0;j<4;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }

}



