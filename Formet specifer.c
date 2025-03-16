#include<stdio.h>
int main()
{
    // signed numbers
    int a=23;
    float b=30.334455557777;
    double c = 30.334455557777;
    printf("%d\n",a);                            ///integer
    printf("%i\n",a);                           ///signed integer (we can use same like integer alternative)
    printf("%o\n",a);                          ///Octal // Output -->12 : 1 time ,2 balance
    printf("Hexadecimal of a = %x\n",a);      ///Hexadecimal
    printf("Hexadecimal of a = %#x\n",a);    ///Hexadecimal (output --> 0x17 (0x mean hexadecimal formet. for example --> ox64 / ox32))
    printf("%f\n",b);                       ///Float ( total 8 bit ---->> Output - 30.334455) --> ((inge float aanthu total value il muthal 8 numbers varaikum ullathai print pannum))
    printf("%f\n",c);                      ///double ( total 8 bit ---->> Output - 30.334456) --> ((inge double aanthu total value inaium 8 bit itkul adankumaaru mattam thattum))
    printf("%.2f\n",c);                   ///mattam thattuthal
    printf("%e\n",b);                    ///exponential formet of data
    printf("%05d\n",a);                 ///leangth mantion (0--> 0 flag )(5 --> leangth mantion)(so output --> 00023)(you can change your flag)
}
/*
1. we can hack using (float) data type.
best option for programming using double bcz no bugs here
2. 0 flag importent for hacking
*/
