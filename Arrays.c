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

/// ✅ Method 1: Initialize at Declaration (Recommended) ##############################################

#include<stdio.h>
int main()
{
    int a[5]={2,4,8,12,16};                 /// you can enter under 5 datas ==> 5 / 4 / 3 like this (but i included 5 datas)
    /*
    +----+----+----+----+----+
    |  2 |  4 |  8 | 12 | 16 |
    +----+----+----+----+----+
       0    1    2    3    4
    */
    printf("value of [3] = %d",a[2]);
}


/// ✅ Method 2: Assign Values One by One ##################################################################


#include<stdio.h>
int main()
{
    int a[5];
    a[0]=2;
    a[1]=4;
    a[2]=8;
    a[3]=10;
    a[4]=12;
    printf("value of [3] = %d",a[2]);
    //                |          |
    //              size        data
}

///we can define like this ####################################################################################

#define s 10;
main()
{
    int a[s];
}

/// arrays copy method ################################################################################################

#include<stdio.h>
int main()
{
    int a[5]={2,4,8,12,16};
    int b[3]={10,20};
    int c=10;

    b[1]=a[1];        /// Copy value from a[1] to b[1]
    a[2]=c;           /// Copy value from c to a[2]

    printf("%d\n%d",b[1],a[2]);
}


///get input from user (1st array) ################################################################################

#include<stdio.h>
int main()
{
    int a[5];
    int x;

    printf("Enter the numbers: \n");
    for(x=0;x<5;x++)
    {
        scanf("%d\n",&a[x]);
    }
    printf("Arrays are: \n");
    for(x=0;x<5;x++)
    {
        printf(" a[%d] = %d\n",x,a[x]);
    }
    return 0;
}

///get input from user:- array size, data (1st array) ################################################################################


#include<stdio.h>
int main()
{
    int n,x;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];                                   //array size
    printf("Enter the numbers: \n");
    for(x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Arrays are: \n");
    for(x=0;x<n;x++)
    {
        printf(" a[%d] = %d\n",x,a[x]);
    }
    return 0;
}


///2D array #######################################################################################################

   column
       0     1     2
  ┌──────┬──────┬──────┐
0 │  12  │  34  │   2  │  row   ///but memory il ivvaru row column pontru allocate aagathu
  │[0][0]│[0][1]│[0][2]│        ///12 34 2 65 7 89 44 3 12 ivvaruthan memory il allocate aagi irukkum
  ├──────┼──────┼──────┤
1 │  65  │   7  │  89  │
  │[1][0]│[1][1]│[1][2]│
  ├──────┼──────┼──────┤
2 │  44  │   3  │  12  │
  │[2][0]│[2][1]│[2][2]│
  └──────┴──────┴──────┘

#include<stdio.h>
int main()
{
    int a[3][3]={
                {12,34,2},
                {65,7,89},
                {44,3,12}
                };

    printf("Find 2nd row 3d column number: %d\n",a[2][2]);

}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#include<stdio.h>
int main()
{
    int a[2][2];
    int x, y;

    printf("Enter the numbers for the 3D array:\n");
    for(x = 0; x < 2; x++)
    {
        for(y = 0; y < 2; y++)
            {
                scanf("%d\n", &a[x][y]);
            }
    }

    printf("Arrays are: \n");
    for(x = 0; x < 2; x++)
    {
        for(y = 0; y < 2; y++)
            {
                printf("your data is = %d\n",a[x][y]);
            }
    }

    return 0;
}


  //3D array ###########################################################################################################


         0      1      2      3
  ┌───────┬───────┬───────┬───────┐
0 │   12  │   32  │  23   │   74  │
  │ [0][0]│ [0][1]│ [0][2]│ [0][3]│
  ├───────┼───────┼───────┼───────┤
1 │   55  │   66  │   17  │   38  │
  │ [1][0]│ [1][1]│ [1][2]│ [1][3]│
  ├───────┼───────┼───────┼───────┤
2 │   91  │  19   │  11   │  72   │
  │ [2][0]│ [2][1]│ [2][2]│ [2][3]│
  ├───────┼───────┼───────┼───────┤
3 │  33   │  44   │  65   │  36   │
  │ [3][0]│ [3][1]│ [3][2]│ [3][3]│
  └───────┴───────┴───────┴───────┘

#include<stdio.h>
int main()
{
    int a[4][4] = {
                {12, 32, 23, 74},
                {55, 66, 17, 38},
                {91, 19, 11, 72},
                {33, 44, 65, 36}
                };

    printf("Find 2nd row 3rd column number: %d\n", a[3][2]);
}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include<stdio.h>

int main()
{
    int a[2][2][2];
    int x, y, z;

    printf("Enter the numbers for the 3D array:\n");
    for(x = 0; x < 2; x++)
    {
        for(y = 0; y < 2; y++)
        {
            for(z = 0; z < 2; z++)
            {
                printf("Enter value for a[x][y][z]: ", x, y, z);
                scanf("%d", &a[x][y][z]);
            }
        }
    }

    printf("\nThe elements of the 3D array are:\n");
    for(x = 0; x < 2; x++)
    {
        for(y = 0; y < 2; y++)
        {
            for(z = 0; z < 2; z++)
            {
                printf("a[%d][%d][%d] = %d\n", x, y, z, a[x][y][z]);
            }
        }
    }

// calculator ###########################################################################################################
    
    #include<stdio.h>
int main()
{
    int a[13];
    int table,j,s;
    printf("which calculator do you want? \n");
    scanf("%d",&table);

    for(j=0;j<13;j++)
    {
        s = j * table;
        printf("%d * %d = %d\n",j ,table,s);
    }

}

    return 0;
}
//#########################################################################################################################
