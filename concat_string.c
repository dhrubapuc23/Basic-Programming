#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[20];
    int i,j=0,len,len2;
    gets(s1);
    gets(s2);

    len = strlen(s1);
    len2 = strlen(s2);
    s1[len] = ' ';

    for(i=len+1;i<=(len+len2+2);i++)
    {
        s1[i] = s2[j];
        j++;
    }

    s1[i] = '\0';

    printf("%s",s1);
}
