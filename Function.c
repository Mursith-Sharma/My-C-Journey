void messi() {
  int x = 5 , y = 10 , z;
  int z = x + y;
  printf(" x + y is: %d", z)
}

int main() {
  messi();  // call the function
  return 0;
}


//Real Scenario

#include<stdio.h>

int messi()
{
    int a=40,b;
    b=a+30;
    printf("a = %d\n",b);
}

int ronaldo()
{
    int c=40,d;
    d=c+40;
    printf("a = %d\n",d);
}

int neymar()
{
    int x=40,y;
    y=x+50;
    printf("a = %d\n",y);
}

int main()
{
    messi();
    ronaldo();
    neymar();
}

