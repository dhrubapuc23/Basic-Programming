#include<stdio.h>

int main()
{
    char str[50],str2[50];

    gets(str);
    int len,i,j=0;

    len = strlen(str);
    for(i=len-1;i>=0;i--)
    {
        str2[j] = str[i];
        j++;
    }

    str2[j] = '\0';
    //printf("%s",str2);

    if(strcmp(str,str2) == 0)
        printf("Palindrome string!");
    else
        printf("Not a palindrome string!");
}
