#include<stdio.h>

int main()
{
    char str[50], s1,s2;
    int i,fc=0,lc=0,flag=0,check_fst=0;
    gets(str);
    printf("Enter s1 & s2: ");
    scanf("%c %c",&s1,&s2);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i] == s1) && (check_fst==0))
        {
            flag=1;
            fc = i;
            lc = i;
            check_fst=1;
        }
        else if(str[i] == s1)
        {
            lc = i;
        }
    }
    if(flag==1)
    {
        printf("1st: %d\nlast: %d\n",fc+1,lc+1);
        str[fc] = s2;
        printf("%s",str);
    }

    else
        printf("character not found!");
}

