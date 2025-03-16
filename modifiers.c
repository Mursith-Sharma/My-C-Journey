#include<stdio.h>
int main()
{
    int a = 45;
    short x = 456;
    short y = 456000;
    long z = 2147483647;

    printf("input = 45 ; length modify       -->  %05d \n",a);          // length modifiers
    printf("input = 456 ; short modify       -->  %d \n",x);
    printf("input = 456000 ; short modify    -->  %d \n",y);           //so short modify total length (0 - 32767 <== positive range)
    printf("input = 2147483647 ; long modify     -->  %d \n",z);       //so long modify total length (0 - 2147483647 <== positive range)

}

/*
integer in size inai modify pannuvathtku short , long use pannuvom
Reason for minus(-) output ==> read sir notes
short = 2 byte / 16 bit:
long = 4 byte / 32 bit

use of modifiers
1. time complexity
2. space complexity
*/
