#include<stdio.h>

int main()
{
    ///char arr[100] = {'h','e','l','l','o',' ','w','o','r','l','d'};
    char arr[100];
    int i,v,c,ws,d,others;
    v=c=ws=d=others=0;
    ///scanf("%[^\n]",arr);
    gets(arr);
    /**while((c=getchar()) != '\n')
    {
        arr[i] = c;
        i++;

    }
    arr[i] = '\0';

    printf("%s",arr);**/
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>'0' && arr[i] < '9')
            d++;
        else if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'u')
            v++;
        else if(arr[i]>='a' && arr[i] <= 'z')
            c++;
        else if(arr[i] == ' ')
            ws++;
        else
            others++;

    }
    printf("Vowel: %d\n",v);
    printf("Consonant: %d\n",c);
    printf("Digit: %d\n",d);
    printf("Whitespace: %d\n",ws);
    printf("Other character: %d\n",others);
}











