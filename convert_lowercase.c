#include<stdio.h>

int main()
{
    char str[100];
    gets(str);
    int i=0,j;

    while(str[i] != '\0')
    {
        i++;
    }
   for(j=0;j<i;j++)
   {
       if(str[j] >= 'A' && str[j] <= 'Z')
          str[j] = str[j] + 32;
   }

   puts(str);
}

