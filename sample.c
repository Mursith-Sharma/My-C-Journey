#include<stdio.h>
int main ()
{
    FILE *fp;
    char c[255],e[255],ch;
    int i,n,m;

    fp = fopen("mydoc.txt","r");

    while(fscanf(fp,"%s",c)!=-1)
    {

            printf("%s\n",c);

    }
    fclose(fp);
    return 0;
}
