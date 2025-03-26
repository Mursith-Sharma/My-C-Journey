#include<stdio.h>
int main()
{
    int a [5]={10,20,30,40,50},i;
    int b[5];

    for(i=0;i<5;i++)
        b[i]=a[i];               // don't copy like this => a[i]=b[i];

    for(i=0;i<5;i++)
        printf("%d\n",b[i]);
}
