#include<stdio.h>
int messi(int num);

int messi(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter the even or odd number: ");
    scanf("%d",&n);
    if (messi(n))
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
}
