#include<stdio.h>

int main()
{
    char str[100],str2[100];
    gets(str);
    gets(str2);
    int i,cnt=0,s1,s2;

    s1 = strlen(str);
    s2 = strlen(str2);

    if(s1 != s2)
        printf("Not equal!");
    else
    {
        for(i=0;i<s1;i++)
        {
            if(str[i]>= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        for(i=0;i<s2;i++)
        {
            if(str[i] == str2[i])
                cnt++;
        }

        if(cnt == s1)
            printf("Equal");
        else
            printf("Not equal!");
    }




}


