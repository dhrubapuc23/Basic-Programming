#include<stdio.h>

int main()
{
    char str[80];
    gets(str);
    int i,fc=0,lc=0,flag=0,check_fst=0,cnt=0;
    int len = strlen(str);
    //printf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') && (check_fst==0))
        {
            //flag=1;
            fc = i;
            //lc = i;
            check_fst=1;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lc = i;
        }
    }

    /**printf("%d %d\n",fc,lc);
    printf("%c",str[11]);**/
    for(i=fc;i<=lc;i++)
    {
        if(str[i]==' ')
            cnt++;

    }
    printf("%d",cnt+1);
}
