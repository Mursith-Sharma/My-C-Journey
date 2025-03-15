//without argument without return

#include<stdio.h>  // return , int

void messi();

void main()

{
     messi();

}
void messi()
{
    int a=5,b=6,c;
    c=a+b;
    printf("%d",c);

}

//without argument without return get input from user

#include<stdio.h>

void messi();

void main()

{
     messi();

}
void messi()
{
    int a,b,c;
    printf("Enter numbers \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);

}

//without argument with return

#include<stdio.h>  // return , int

int messi();

void main()

{
    int x;
    x=messi();
    printf("%d",x);

}
int messi()
{
    int a=5,b=6,c;
    c=a+b;
    return c;
} 9

//without argument with return get input from user

#include<stdio.h>

int messi();
int m=120;   //GlobalVariable

void main()
{
    int z;
    z=messi();
    printf("%d",z);
}

int messi()
{
    int x,y,z;
    printf("Enter the numbers: \n");
    scanf("%d%d",&x,&y);
    z=x+y+m;
    return z;
}

//with argument without return

#include<stdio.h>              // header

void messi(int , int);         //declaration

void main()                    // call function
{
    int a=5,b=3;
    messi(a,b);                //<<---- Real Call Function
}

void messi(int x, int y)     //Definition
{
    int z;
    z=x+y;
    printf("%d\n",z);
}

//with argument without return get input from user

#include<stdio.h>              // header

void messi(int , int);         //declaration

void main()                    // call function
{
    int a,b;

    printf("enter the number a,b \n ");
    scanf("%d%d",&a,&b);

    messi(a,b);                //<<---- Real Call Function
}

void messi(int x, int y)     //Definition
{
    int z;
    z=x+y;
    printf("%d\n",z);
}

//with argument with return
#include<stdio.h>

int messi(int , int );

void main()
{
    int a=5,b=4,c;
    c = messi(a,b);
    printf("%d",c);
}
int messi(int x , int y)
{
    int z;
    z=x+y;
    return z;
}

//with argument with return get input from user

#include <stdio.h>

void messi(int, int);

void main()
{
    int a, b;

    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    messi(a, b);

}

void messi(int x, int y)
{
    int z;
    z = x + y;
    printf("%d\n", z);
}

