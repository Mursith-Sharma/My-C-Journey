#include<stdio.h>
int main()
{
    char a[]="Cyber security";
    char b[]="artificial intellingence";
    char *i = a;                             // i,j il a,b ilulla data save aagavillai maaraaga a,b ilulla base address than save aagiullathu
    char *j = b;                             // athilulla adddress i vaiththuthan athanudaiya data i print pannuhirathu

    printf("1 = %s\n",a);
    printf("2 = %s\n",i);
    printf("3 = %s\n",j);
    a[2] = 'H';
    printf("4 = %s\n",i);

}
