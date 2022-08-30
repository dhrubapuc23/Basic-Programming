#include<stdio.h>

int main()
{
    char str[50],tmp[50];
    int i,j=0,len,m=0;

    gets(str);

    len = strlen(str);

    for(i=len-1;i>=0;i--)
    {
        tmp[j] = str[i];
        j++;
    }

    tmp[j] = '\0';

    if(strcmp(str,tmp) == 0)
        printf("Palindrome string!\n");
    else
        printf("Not a palindrome string!\n");

    printf("%d",strcmp("cd","ab"));

    /*for(i=0;i<len;i++)
    {
        if(str[i] == tmp[i])
            m++;
    }

    if(m == len)
        printf("Palindrome string!");
    else
        printf("Not a palindrome string!");*/






}
