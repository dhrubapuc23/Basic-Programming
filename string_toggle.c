#include<stdio.h>

int main()
{
    char arr[100];
    gets(arr);
    int i;

    for(i=0;arr[i] != '\0';i++)
    {
        if(arr[i]>='a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }

        else if(arr[i]>='A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
    }

    puts(arr);

}
