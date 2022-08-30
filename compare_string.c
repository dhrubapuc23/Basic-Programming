#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[20];
    int i,cnt=0,len,len2;
    gets(s1);
    gets(s2);

    len = strlen(s1);
    len2 = strlen(s2);
    if(len != len2)
    {
        printf("Not equal!");
    }

    else
    {
            for(i=0; i<len; i++)
        {
              if(s1[i] == s2[i])
                cnt++;

        }

        if(cnt == len)
            printf("Equal!");
        else
            printf("Not equal!");

    }


}

