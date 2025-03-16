            /// Arithmetic Operators

Operator    	Name	                Example           Description
   +       	Addition                   x + y         Adds together two values
   -       	Subtraction	               x - y         Subtracts one value from another
   *       	Multiplication	           x * y         Multiplies two values
   /        Division	               x / y         Divides one value by another
   %       	Modulus	                   x % y         Returns the division remainder
   ++      	Increment                  ++x           Increases the value of a variable by 1
   --      	Decrement                  --x           Decreases the value of a variable by 1

               ///Comparison Operators

Operator    	Name	                Example           Description
   ==	    Equal to		            x == y       Returns 1 if the values are equal
   !=	    Not equal		            x != y       Returns 1 if the values are not equal
   >	    Greater than	 	        x > y        Returns 1 if the first value is greater than the second value
   <	    Less than	                x < y        Returns 1 if the first value is less than the second value
   >=	    Greater than or equal to    x >= y       Returns 1 if the first value is greater than, or equal to, the second value
   <=	    Less than or equal to	    x <= y       Returns 1 if the first value is less than, or equal to, the second value

               /// Logical Operators

Operator    Name	                Example           Description

   && 	    AND	                x < 5 &&  x < 10	 Returns 1 if both statements are true
   || 	    OR	                x < 5 || x < 4	     Returns 1 if one of the statements is true
   !	    NOT	               !(x < 5 && x < 10)    Reverse the result, returns 0 if the result is 1


              /// Assignment/ Relational Operators


Operator     Example	      	Same As

   =	    x = 5	        x = 5
  +=       	x += 3      	x = x + 3
  -=	    x -= 3	        x = x - 3
  *=	    x *= 3	        x = x * 3
  /=	    x /= 3	        x = x / 3
  %=	    x %= 3	        x = x % 3
  &=	    x &= 3	        x = x & 3
  |=	    x |= 3	        x = x | 3
  ^=	    x ^= 3	        x = x ^ 3
  >>=	    x >>= 3	        x = x >> 3
  <<=	    x <<= 3	        x = x << 3

################################################################# Prectical ####################################################################

#include<stdio.h>
int main()
{

    /// Arithmetic Operators

     int x = 5;

    printf("x       = %d \n",x);
    printf("++x     = %d \n",++x);  ///Pre Increment
    printf("x       = %d \n",x);
    printf("x++     = %d \n",x++);  ///Post Increment
    printf("x       = %d \n",x);
    printf("--x     = %d \n",--x);  ///Pre decrement
    printf("x       = %d \n",x);
    printf("x--     = %d \n",x--);  ///Post decrement
    printf("x       = %d \n",x);

     /// Logical Operators

    int y = 60 , z = 13;

    printf("y & z   = %d \n",y&z);  ///Bitwise AND operator
    printf("y | z   = %d \n",y|z);  ///Bitwise OR operator
    printf("y ^ z   = %d \n",y^z);  ///Bitwise XOR operator

    /// Assignment/ Relational Operators

    printf("y << 2  = %d \n",y<<2);  ///Left Shift operator
    printf("y << 3  = %d \n",y<<3);  ///Left Shift operator
    printf("y >> 2  = %d \n",y>>2);  ///Right Shift operator
    printf("y >> 3  = %d \n",y>>3);  ///Right Shift operator

    ///

    printf(" ~ y    = %d \n",~y);    /// 1's Complement operator
}


____________________________Mursith Explained_______________________________

    128 64 32 16  8  4  2  1
      0  0  1  1  1  1  0  0   =  60

      m = 60 →  0011 1100  (Binary of 60)
--------------------------------
1st shift (>> 1) →  0001 1110  (Now 30)
2nd shift (>> 2) →  0000 1111  (Now 15)
3rd shift (>> 3) →  0000 0011  (Now 7)
--------------------------------
Final Result → 7

___________________________________________________________________________

#####################################################################################################################################
