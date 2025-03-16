
Data Type            	Size	               Description                                                                                                                  	Example


int	               2 or 4 bytes            Stores whole numbers, without decimals                                                                                          	1
float	             4 bytes	               Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits                           	1.99
double	           8 bytes	               Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits                           	1.99
char	             1 byte	                 Stores a single character/letter/number, or ASCII values	                                                                        'A'

  #include<stdio.h>
  int main ()
{
  printf("size of int = %d\n" , sizeof(int));
  printf("size of char = %d\n" , sizeof(char));
  printf("size of float = %d\n" , sizeof(float));
  printf("size of double = %d\n" , sizeof(double));
  
}
