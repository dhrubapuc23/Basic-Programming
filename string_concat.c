#include<stdio.h>

int main()
{
    char str[100],str2[100];
    gets(str);
    gets(str2);
    int i,j;

    for(i=0;str[i]!='\0';i++);

    str[i++] = ' ';

    for(j=0;str2[j]!='\0';j++)
    {
        str[i] = str2[j];
        i++;
    }

    str[i] = '\0';

    puts(str);


}

