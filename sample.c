
#include<stdio.h>
int main()
{
    int n,x;
    int a[n];
    printf("enter the array size: ");
    scanf("%d",&n);

    printf("Enter the numbers: \n");
    for(x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Arrays are: \n");
    for(x=0;x<n;x++)
    {
        printf(" a[%d] = %d\n",x,a[x]);
    }
    return 0;
}
