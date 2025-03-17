///while loob

#include <stdio.h>

int main() {
    int x = 50;
    while (x > 0)
    {
        printf("_-Mursith loob statment-_ \n");
        x=x-1;    //or n-=1;

    }
}

///Print (0 to 10 ,, 10 - 0) using while loob

#include <stdio.h>

int main()
{
    int x = 0,y=10;
    while (x < 11)
    {
        printf("%d\n",x);
        x++;
    }

    while(y > -1)
    {
        printf("%d\n",y);
        y--;
    }
}



///Do while statment


#include <stdio.h>

int main()
{
    int x=2 , y=0;
    while((x>0) || (y>0))                             /// y > 0 ==> 0 > 0 so y --> false so only work ==> x , after work do loob.
    {
        printf("from while loob\n");
        --x;
    }
    do
    {
        printf("from do while loob\n");
    }
    while(y>0);
}

///Print (0 to 10 ,, 10 - 0) using do while loob

#include<stdio.h>
int main()
{
    int x=0;
    do
        {
            printf("%d\n",x);
            x++;
        }
    while(x<=10);

    int y=10;
    do
       {
            printf("%d\n",y);
            y--;
       }
    while(y>=0);
}

Loop Type	When to Use?

while Loop (Unknown Iterations)
Used when you don’t know how many times the loop should run.
It keeps running until a condition becomes false.

for Loop (Known Iterations)
Used when you know exactly how many times to run the loop.
It has three parts in one line:
(1) Initialization, (2) Condition, (3) Increment/Decrement.

///nested loob statment

#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=6;a++)
    {
        for(b=1;b<=3;b++)
            printf(" a = %d\n b = %d\n",a,b);
            printf(" a * b = %d\n",a*b);
    }
}
