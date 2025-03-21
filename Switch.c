#include<stdio.h>
int main ()
switch (expression)
{
  case x:
    break;

  case y:
    break;

  default:

}

// #1 (integer declar)

#include<stdio.h>
#include<stdlib.h>              /// for exit function

int main()
{
    int subject;               /// bcz A,B,C ... included
    printf("1. maths \n2. english \n3. histroy \n4. science \n5. ict \n6. EXIT\n");

    printf("Enter your subject: ");
    scanf("%d",&subject);

    switch (subject)
    {
        case 1:
    printf("you selected maths exam");
    break;

case 2:
    printf("you selected english exam");
    break;

case 3:
    printf("you selected histroy exam");
    break;

case 4:
    printf("you selected science exam");
    break;

case 5:
    printf("you selected ict exam");
    break;

case 6:
    printf("EXIT");
    exit(0);                       ///default exit function

default :
    printf("Please enter 1 - 6");
    break;
    }

}

// #1 (integer declar)

#include<stdio.h>
#include<stdlib.h>              /// for exit function

int main()
{
    char subject;               /// bcz A,B,C ... included
    printf("A. maths \nB. english \nC. histroy \nD. science \nE. ict \nF. EXIT \n");

    printf("Enter your subject: ");
    scanf("%c",&subject);

    switch (subject)
    {

case 'A':
    printf("you selected maths exam");
    break;

case 'B':
    printf("you selected english exam");
    break;

case 'C':
    printf("you selected histroy exam");
    break;

case 'D':
    printf("you selected science exam");
    break;

case 'E':
    printf("you selected ict exam");
    break;

case 'F':
    printf("EXIT");
    exit(0);                       ///default exit function

default :
    printf("Please enter A - F");
    break;
    }

}

//mathematic calculation

#include<stdio.h>
#include<stdlib.h>              /// for exit function

int main()
{
    float a,b ;               /// float reason ==> x.y (point numbers)
    int num;
    printf("1. add \n2. subtraction \n3. Division \n4. multiplication \n5. EXIT \n");

    printf("Enter your number: ");
    scanf("%d",&num);

     switch (num)
    {
case 1:
    printf("enter 2 addition numbers \n");
    scanf("%f%f",&a,&b);
    printf("answer = %f\n",a+b);
    break;

case 2:
    printf("enter 2 subtraction numbers \n");
    scanf("%f%f",&a,&b);
    printf("answer = %f\n",a-b);
    break;
case 3:
    printf("enter 2 Division numbers \n");
    scanf("%f%f",&a,&b);
    printf("answer = %f\n",a/b);
    break;

case 4:
    printf("enter 2 multiplication numbers \n");
    scanf("%f%f",&a,&b);
    printf("answer = %f\n",a*b);
    break;

case 5:
    printf("EXIT");
    exit(0);                       ///default exit function

default :
    printf("Please enter 1 - 5");
    break;
    }

}
