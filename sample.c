#include<stdio.h>
#include<ctype.h>                              // toupper

void* upper(char *string)
{
    printf("string received is : %s",string);
    for(int i=0;i<=sizeof(string);i++)
    {
        if(capital(string[]))
            continue;
        else(lower(string[i]))

    }
}

int capital(char c)
{
    if(c>=65 && c<=90)
        return 1;
    else
        return 0;
}

int capital(char c)
{
    if(c>=97 && c<=122)
        return 1;
    else
        return 0;
}

int main()
{
char s[100];
printf("enter a word: ");
scanf("%s",s);
printf("the string is stored at %d, %d\n",s,&s[0]);
upper(s);
printf("Upper case letters : %s\n",s);
}
