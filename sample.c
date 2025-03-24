#include<stdio.h>
#include<stdlib.h>               //for malloc function
int main()
{
    int *t , i, j;
    printf("enter the number of input: ");
    scanf("%d",&j);
    printf("enter the %d input: \n",j);
    t = (int*)malloc(j*sizeof(int));   //syntax ==> ptr=(cast-type*)malloc(n*byte-size)
    printf("address of t = %p\n",t);

    for(i=0;i<j;i++)
        scanf("%d",&t[i]);
    for(i=0;i<j;i++)
        printf("t[%d] = %d\n",i,t[i]);

}
