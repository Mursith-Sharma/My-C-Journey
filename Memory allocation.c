// dynamic memory allocation

//malloc()
//calloc()
//realloc()
//free()

// read my notes
main()
{

int a;            // declaration
a = 10 ;          //definition
a = a + 1         // process
printf("%d",a);   // process /usage

}                 // termination

###############################################################################

#include<stdio.h>
int main()
{
    int a [10], n, i;
    printf("enter the number of inputs: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter the value in array\n");
    for(i=0;i<10;i++)
        printf("%d\n",a[i]);
        printf(" memory of a : %d",sizeof(a));

/*
enter the number of inputs: 4
11
22
33
44
enter the value in array
11
22
33
44
8          }
0
57
0                  => carbage value
7672816
0          }
 memory of a : 40  ==> 10 int x 10 = 40

 //i use 4 input (16 byte)
 //maththa value ellame carbage value aagum
 // so naam memory inai miha kuraivaaga use panna vendum

*/
}

################################################################################################

#include<stdio.h>
int main()
{
    int *t = 10;
    printf("output 1 = %d\n",t);
    printf("output 2  = %p\n",&t);
    printf("output 3  = %p\n",t);
    printf("output 4  = %d\n",*t);

/*
output 1 = 10                    (decimal value)
output 2  = 000000000061FE18
output 3  = 000000000000000A     (hexadecimal value)
 output 4 il t itku address koduththirunthal athatkuriya value inai kattirukkum
*/
}

// malloc (memory allocation method)--> dynamically ###############################################

#include<stdio.h>
#include<stdlib.h>               //for dynamic memory allocation
int main()
{
    int *t , i, j;
    printf("enter the number of input: ");
    scanf("%d",&j);
    printf("enter the %d input: \n",j);
    t = (int*)malloc(j*sizeof(int));   //syntax ==> ptr = (cast-type*)malloc(n*byte-size)
    printf("address of t = %p\n",t);

    for(i=0;i<j;i++)
        scanf("%d",&t[i]);
    for(i=0;i<j;i++)
        printf("t[%d] = %d\n",i,t[i]);

}

// malloc #2  (with address)    #########################################################################

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *t , i, j;
    printf("enter the number of input: ");
    scanf("%d",&j);
    printf("enter the %d input: \n",j);
    t = (int*)malloc(j*sizeof(int));   //syntax ==> ptr=(cast-type*)malloc(n*element-size)
    printf("address of t = %p\n",t);

    for(i=0;i<j;i++)
        scanf("%d",&t[i]);
    for(i=0;i<j;i++)
        printf("t[%d] = %d\n",i,&t[i]);

}

// calloc (Contiguous allocation method)--> dynamically ###############################################

#include<stdio.h>
#include<stdlib.h>               //for dynamic memory allocation
int main()
{
    int *t , i, j;
    printf("enter the number of input: ");
    scanf("%d",&j);
    printf("enter the %d input: \n",j);
    t = (int*)calloc(j,sizeof(int));   //syntax ==> ptr=(cast-type*)calloc(n,element-size)
    printf("address of t = %p\n",t);

    for(i=0;i<j;i++)
        scanf("%d",&t[i]);
    for(i=0;i<j;i++)
        printf("t[%d] = %d\n",i,t[i]);

}

// calloc #2  (with address)    #########################################################################

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *t , i, j;
    printf("enter the number of input: ");
    scanf("%d",&j);
    printf("enter the %d input: \n",j);
    t = (int*)calloc(j,sizeof(int));   //syntax ==> ptr=(cast-type*)calloc(n,element-size)
    printf("address of t = %p\n",t);

    for(i=0;i<j;i++)
        scanf("%d",&t[i]);
    for(i=0;i<j;i++)
        printf("t[%d] = %d\n",i,&t[i]);

}

// free alloc (freeing allocated memory)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *m , *c, j;
    m = (int*)malloc(j*sizeof(int));
    printf("address of t = %p\n",m);

    free(m);                                 //syntax ==> free(ptr);

    c = (int*)calloc(j,sizeof(int));
    printf("address of t = %p\n",c);

/*
output (most of the tim same address edukum)

address of t = 0000000000BE1460
address of t = 0000000000BE1460
*/

}

// realloc (resize previously allocated memory) #####################################################

#include<stdio.h>
#include<stdlib.h>               //for dynamic memory allocation
int main()
{
    int *t , i;
    t = (int*)malloc(15*sizeof(int));   //syntax ==> ptr=(cast-type*)calloc(n,element-size)
    printf("t = %p\n",t);
    t = realloc(t,10*sizeof(int));      // you can increase or decrease this value ==> 10

    printf("t = %p\n",t);
    free(t);
}


// show the diffrent malloc vs calloc ################################################################

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *m ,*c ,i, j;
    m = (int*)malloc(j*sizeof(int));
    c = (int*)calloc(j,sizeof(int));

    printf("address of m = %p\n",m);
    printf("address of c = %p\n",c);

    printf("\n malloc carbage values \n\n");
    for(i=0;i<j;i++)
        printf("m[%d] = %d\n",i,m[i]);

    printf("\n calloc null values \n\n");
    for(i=0;i<j;i++)
        printf("c[%d] = %d\n",i,c[i]);

}

#############################################################################################################

Memory Allocation by malloc():      //malloc aanathu emty aana memory il some carbage value edukkum
---------------------------------
malloc(4 * sizeof(int));
[????] [????] [????] [????]  (Uninitialized memory - contains garbage values)

Memory Allocation by calloc():
---------------------------------
calloc(4, sizeof(int));
[0000] [0000] [0000] [0000]  (Initialized to zero)

#######################################################################################################

+-----------------+-------------------------------+-----------------------------+
| Feature        | malloc()                       | calloc()                     |
+-----------------+-------------------------------+-----------------------------+
| Memory Init    | Does NOT initialize memory    | Initializes memory to ZERO  |
+-----------------+-------------------------------+-----------------------------+
| Arguments      | Takes 1 argument (size)       | Takes 2 arguments (count, size) |
+-----------------+-------------------------------+-----------------------------+
| Speed         | Faster                         | Slightly slower (due to init) |
+-----------------+-------------------------------+-----------------------------+
| Use Case      | When initialization is not needed | When zero-initialized memory is required |
+-----------------+-------------------------------+-----------------------------+
| Syntax        | ptr = (int*)malloc(size);      | ptr = (int*)calloc(n, size); |
+-----------------+-------------------------------+-----------------------------+
// according to speed wise > malloc
// according to safty wise > calloc
// malloc / calloc use pannuvathal memory waste aagathu

