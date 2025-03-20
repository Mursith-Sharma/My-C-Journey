#include<stdio.h>
int main()
{
    int x=10, y=5, z;
    char m='7', n='L', e;
    z = x + y;
    e = m + n;

    printf("%d\n",z);
    printf("%c",e);
}

/* char a = 'm'
   store single letter in char variable
   must use == > ''
*/

//   #1  ###############################################

#include<stdio.h>
int main()
{
    char c[10] = "SUPRA";

       {
         printf("%s\n", c);
       }
}

// #2   ################################################

#include<stdio.h>
int main()
{
    char c[10] = {'S','U','P','R','A'};

       {
         printf("%s\n", c);
       }
}

// #3  #################################################

#include<stdio.h>
int main()
{
    char car[] = "SUPRA";
    int i;

    for (i = 0; i < 5; ++i)
       {
         printf("%c\n", car[i]);
       }
}

//particular letter print 1d ###############################

#include<stdio.h>
int main()
{
    char k[10]={"SUPRA"};
    printf("%c",k[2]);
}

//particular letter print 2d ###############################

#include<stdio.h>
int main()
{
    char name[6][6]={"marval","studio"};  // 2 rows 6 column in this array
    printf("%c",name[1][5]);              // 2nd row 6th column
}


// string length ##########################################

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="mursith sharma";
    int length=strlen(str);
    printf("string length = %d",length);
}

// string copy method #######################################

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello, Geeks!";
    char s2[50];

    strcpy(s2, s1);            ///copy from s1 to s2
    strcpy(s1 , "mursith");    ///copy anothr way
    printf("%s \n %s",s1,s2);
    return 0;
}

#############################################################

       0      1      2      3      4      5
  ┌───────┬───────┬───────┬───────┬───────┬───────┐
  │   G   │   e   │   e   │   k   │   s   │  \0   │    String
  │ [0]   │ [1]   │ [2]   │ [3]   │ [4]   │ [5]   │
  ├───────┼───────┼───────┼───────┼───────┼───────┤
  │0x23452│0x23453│0x23454│0x23455│0x23456│0x23457│    Address
  └───────┴───────┴───────┴───────┴───────┴───────┘


Function Name	         Description
strlen(string_name) 	Returns the length of string name.
strcpy(s1, s2)       	Copies the contents of string s2 to string s1.
strcmp(str1, str2)	    Compares the first string with the second string. If strings are the same it returns 0.
strcat(s1, s2)	        Concat s1 string with s2 string and the result is stored in the first string.
strlwr()	            Converts string to lowercase.
strupr()	            Converts string to uppercase.
strstr(s1, s2)	        Find the first occurrence of s2 in s1.
