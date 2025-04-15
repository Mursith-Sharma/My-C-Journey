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
