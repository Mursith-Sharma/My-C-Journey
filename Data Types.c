// Create variables #######################################################################################################################################
int myNum = 10;             // Integer 
float myFloatNum = 10.99;   // Floating point number
char myLetter = 'C';       // Character

// Print variables #######################################################################################################################################
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

Data Type        | Size (bytes) in 32-bit | Size (bytes) in 64-bit
---------------------------------------------------------------
int             | 4                      | 4
float           | 4                      | 4
char            | 1                      | 1
short int       | 2                      | 2
long int        | 4                      | 8
long long int   | 8                      | 8
double          | 8                      | 8
long double     | 12 or 16               | 16
pointer         | 4                      | 8
array           | Depends on type & size | Depends on type & size

##########################################################################################################################################################

Data Type            	Size	               Description                                                                                                                  	Example
 
 int	               2 or 4 bytes            Stores whole numbers, without decimals                                                                                          	1
 float	             4 bytes	               Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits                           	1.99
 double	             8 bytes	               Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits                           	1.99
 char	               1 byte	                 Stores a single character/letter/number, or ASCII value                                                                          ' A'
 
  //different between float & double (only memory size difference ==> 4 byte : 8 byte) #####################################################################
 
   #include<stdio.h>
   int main ()
 {
   printf("size of int = %d\n" , sizeof(int));
   printf("size of char = %d\n" , sizeof(char));
   printf("size of float = %d\n" , sizeof(float));
   printf("size of double = %d\n" , sizeof(double));
 
 }
