//####################################### sscanf #######################################

// 3 red balls inai output pannal #######################################

#include<stdio.h>
int main ()
{
    char s[]="3 red balls 2 blue balls";
    char str1[10] , str2[10];
    int no;

    sscanf(s,"%d %s %s",&no,str1,str2);
    printf("no   : %d\n",no);
    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);

    printf("%s",s);
}

// 2 blue balls inai print pannal ##########################################

#include<stdio.h>
int main ()
{
    char s[]="3 red balls 2 blue balls";
    char str1[10] , str2[10];
    int no;

    sscanf(s,"%*d %*s %*s %d %s %s",&no,str1,str2);   // %*d ivvaru vanthal print aagathu skip aagum
    printf("no   : %d\n",no);
    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);

    printf("%s",s);
}

// 32 balls inai print pannal ##########################################

#include<stdio.h>
int main ()
{
    char s[]="3 red balls 2 blue balls";
    char str1[10] , str2[10];
    int no,no1;

    sscanf(s,"%d %*s %*s %d %*s %s",&no,&no1,str2);   // %*d ivvaru vanthal print aagathu skip aagum
    printf("no   : %d\n",no);
    printf("str1 : %d\n",no1);
    printf("str2 : %s\n",str2);

    printf("%s",s);
}

//####################################### files #######################################

// files open & read #1 #################################################


#include<stdio.h>
int main ()
{
    FILE *fp;
    char ch;

    fp = fopen("arrays.c","r");    // your file name

    while(1)
    {
        ch = fgetc(fp);
        if(ch!=EOF)
            printf("%c",ch);
        else
            break;
    }
}

// files open & read #2 ###################################################

#include<stdio.h>
int main ()
{
    FILE *fp;
    char ch;

    fp = fopen("arrays.c","r");    // your file name
    ch = fgetc(fp);

    while(ch!=-1)                  // watch video reason to -1
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
    printf("%d",EOF);
}

// files create & read ##############################################################

#include<stdio.h>
int main ()
{
    FILE *fp;
    char ch;

    fp = fopen("mydoc.txt","w");
    printf(" 2* table\n");

    while(ch!=-1)
    {
        scanf("%c",&ch);
        if(ch!='Q')
            fputc(ch,fp);
        else
            break;
    }
}

// write end of the character create without delete your data  ###################################################

#include<stdio.h>
int main ()
{
    FILE *fp;
    char ch;

    fp = fopen("mydoc.txt","a");    // append mod

    printf("enter your content \n to stop enter Q\n");

    while(ch!=-1)
    {
        scanf("%c",&ch);
        if(ch!='Q')
            fputc(ch,fp);
        else
            break;
    }
}

// write 2* table using for loob  ###################################################

#include<stdio.h>
int main ()
{
    FILE *fp;
    char c='x',e='=';
    int d=2;

    fp = fopen("mydoc2x.txt","a");

    printf("2* table \n");
    for(int i=0;i<16;i++)
    {
        fprintf(fp,"%d %c %d %c %d\n",i,c,d,e,i*d);
    }
    fclose(fp);                    // must importent so watch video files part 2 (1:00:05)
    return 0;

}

// show output in 2* table in cmd #1 ###################################################

#include<stdio.h>
int main ()
{
    FILE *fp;
    char c[255],e[255];
    int i,n,m;

    fp = fopen("mydoc2x.txt","r");

    while(fscanf(fp,"%d %s %d %s %d",&i,c,&n,e,&m)!=EOF)
    {

            printf("%d %s %d %s %d\n",i,c,n,e,m);

    }
    fclose(fp);
    return 0;
}

// show output in 2* alternative #2 ###################################################

#include<stdio.h>
int main ()
{
    FILE *fp;
    char c[255],e[255],ch;
    int i,n,m;

    fp = fopen("mydoc1.txt","r");
    ch=fscanf(fp,"%d %s %d %s %d",&i,c,&n,e,&m);

    while(ch!=-1)
    {

            printf("%d %s %d %s %d\n",i,c,n,e,m);
            ch=fscanf(fp,"%d %s %d %s %d",&i,c,&n,e,&m);

    }
    fclose(fp);
    return 0;
}

// watch video -1 concept (for hacking method)
// next one #################################################################################

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

// copy & paste #######################################################################

#include<stdio.h>
int main ()
{
    FILE *src, *des;
    char ch;

    src = fopen("mydoc.txt","r");        // copy paste mechanisum(read & erite)
    des = fopen("mydoc3.txt","w");

    if(!src)
    {
        printf(" sorce does not exits\n");
    }
    else
    {
        while((ch=fgetc(src))!=EOF)
            fputc(ch,des);
    }

    fclose(src);
    fclose(des);
    printf("File is copied");

    return 0;
}

// copy & paste input from user ##########################################################

#include<stdio.h>
int main ()
{
    FILE *src, *des;
    char ch;
    char srcf[50],desf[50];
    printf("Enter the sorce file with extension: \n");           // copy file name
    scanf("%s",srcf);
    printf("Enter the destination file with extension: \n");     // paste (virumpina file name podalam)
    scanf("%s",desf);

    src = fopen(srcf,"r");        // copy paste mechanisum(read & erite)
    des = fopen(desf,"w");

    if(!src)
    {
        printf(" sorce does not exits\n");
    }
    else
    {
        while((ch=fgetc(src))!=EOF)
            fputc(ch,des);
    }

    fclose(src);
    fclose(des);
    printf("File is copied");

    return 0;
}

// file delete ##########################################################

#include<stdio.h>
int main ()
{
    int re;
    re=remove("mydoc5.txt");
    printf("re = %d\n",re);              // not importent but i just print what value in this re

    if(!re)                            // or if(re==0)
        printf("file is deleted");
    else
        printf("file not deleted");
}

// file move ##########################################################
// mechanisum ==> copy(read) -> paste(write) -> delete already file

#include<stdio.h>
int main ()
{
    FILE *src, *des;
    char ch;
    int re;

    char srcf[50],desf[50];
    printf("Enter the sorce file with extension: \n");           // copy file name
    scanf("%s",srcf);
    printf("Enter the destination file with extension: \n");     // paste (virumpina file name podalam)
    scanf("%s",desf);

    src = fopen(srcf,"r");        // copy paste mechanisum(read & erite)
    des = fopen(desf,"w");

    if(!src)
    {
        printf("sorce does not exits\n");
    }
    else
    {
        while((ch=fgetc(src))!=EOF)
            {
                fputc(ch,des);
            }
            fclose(src);
            fclose(des);
            printf("File is copied\n");
    }
    re =remove(srcf);
    printf("re = %d",re);
    if(!re)
        printf("sorce file is deleted");
    else
        printf("sorce file is not deleted");


    return 0;
}

