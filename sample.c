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
