#include<stdio.h>
int main ()
{
    FILE *fp;
    char ch;

    fp = fopen("mydoc.txt","w");    // your file name

    printf("enter your content \n to stop enter q\n");

    while(ch!=-1)
    {
        scanf("%c",&ch);
        if(ch!='Q')
            fputc(ch,fp);
        else
            break;

    }

}
