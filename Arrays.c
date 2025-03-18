/// ✅ Method 1: Initialize at Declaration (Recommended)
c
Copy
Edit


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


/// ✅ Method 2: Assign Values One by One


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

///we can define like this

#define s 10;
main()
{
    int a[s];
}

/// copy method

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


///get input from user (1st array)

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

///2D array

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


  ///3D array

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
//############################# Output Show ####################################

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

    return 0;
}

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
