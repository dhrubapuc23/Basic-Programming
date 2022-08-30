#include<stdio.h>

int main()
{
    char str[50], sr;
    int i,fc=0,lc=0,flag=0,check_fst=0;
    gets(str);
    printf("Enter a character: ");
    scanf("%c",&sr);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i] == sr) && (check_fst==0))
        {
            flag=1;
            fc = i;
            lc = i;
            check_fst=1;
        }
        else if(str[i] == sr)
        {
            lc = i;
        }
    }
    if(flag==1)
        printf("1st: %d\nlast: %d",fc+1,lc+1);
    else
        printf("character not found!");
}
