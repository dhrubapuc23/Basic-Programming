#include<stdio.h>
#include<stdlib.h>
void sort_word(char *str[])
{

}

int main()
{
    char *str[50];
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        str[i] = (char*)malloc(20*sizeof(char));
        scanf("%s",str[i]);
    }


    for(i=0;i<n;i++)
        puts(str[i]);
}
