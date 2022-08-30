#include<stdio.h>

int main()
{
    char str[100],copyarr[100];
    gets(str);
    int i=0;

    while(str[i] != '\0')
    {
        copyarr[i] = str[i];
        i++;
    }

    copyarr[i] = '\0';

    printf("Length: %d\n",i);
    puts(copyarr);

}
