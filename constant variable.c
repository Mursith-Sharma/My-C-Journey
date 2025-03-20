In C, there are different types of variables

int - stores integers (whole numbers)
float - stores floating point numbers, with decimals
char - stores single characters

##########################################################################################################################

#include<stdio.h>
#define PI 3.14

int main()
{

    float area;
    int radius = 5; // OR you can use this --->  const int radius = 5;
    area = PI * radius * radius;
    printf("Area = %f\n",area);

    /* Constants Variable types
       1. #define
       2. const
}

##############################################################################################################################

// undefine use pannal define il ullathu work aagathu

#include<stdio.h>
#define PI 3.14
#undef PI          

int main()
{

    float area;
    int radius = 5; // OR you can use this --->  const int radius = 5;
    area = PI * radius * radius;
    printf("Area = %f\n",area);
}
