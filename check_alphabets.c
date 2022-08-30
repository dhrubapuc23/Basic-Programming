#include<stdio.h>

int main()
{
    char s;
    scanf("%c",&s);

    s = tolower(s);

    if(s>='a' && s<= 'z')
    {
        switch(s)
    {
        case 'a':

        case 'e':

        case 'i':

        case 'o':

        case 'u': printf("vowel");
                  break;
        default: printf("consonant");

    }
    }

    else
        printf("Invalid input!");


}
