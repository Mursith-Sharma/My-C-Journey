////////////////////////////// Pointer ///////////////////////////////////////////////
int i = 10;
int *p = &i;

    type variabl address value
  └──────┴──────┴──────┴──────┘
0 │      │      │      │      │  ///but memory il ivvaru row column pontru allocate aagathu
  │  int │   i  │1FE1C │  10  │   ///12 34 2 65 7 89 44 3 12 ivvaruthan memory il allocate aagi irukkum
  ├──────┼──────┼──────┼──────┼
2 │      │      │      │      │
  │  int │   p  │1FE10 │1FE1C │
  └──────┴──────┴──────┴──────┘


#include<stdio.h>
int main()
{
    int i = 10;
    int *t = &i;     // * => ponter ( %p )

    printf("i in value             %d \n",i);       // 10
    printf("t in value             %d \n",t);       // 6422044 (decimal value)// ithan hexadecimal value ==> 61FE1C
    printf("i in address           %p \n",&i);      // 000000000061FE1C
    printf("t in address           %p \n",&t);      // 000000000061FE10
    printf("t in address in value  %d \n",*t);      // 10      ( t il store aahiulla address in urimaiyaalarin value )
}

//array address #############################################################################################################################

#include<stdio.h>               ///fully explain in my programmng notes must learn about
int main()
{
    char mars1[5]={"apple"};
    char mars3[5]={'l','e','m','o','n'};
    char mars4[]={'M','A','N','G','O'};

    for(int i = 0;i<sizeof(mars3);i++)
    {
        printf("mars3[%d] = %c stored at ==> %p\n",i,mars3[i],&mars3[i]);
    }
    for(int m = 0;m<sizeof(mars1);m++)
    {
        printf("mars1[%d] = %c stored at ==> %p\n",m,mars1[m],&mars1[m]);
    }
}

// #1    pointer decimal , hexadecimal address ( with buffer overflow ) #######################################################################

#include<stdio.h>               ///fully explain in my programmng notes must learn about
int main()
{
    char mars1[5]={"apple"};
    char mars2[5]={'l','e','m','o','n'};
    int mars3[5]={1,2,3,4,5};


    for(int i = 0;i<sizeof(mars1);i++)
    {
        printf("mars1[%d] = %c address stored at ==> %d (decimal value) ==> %p (hexadecimal value) \n",i,mars1[i],mars1[i],&mars1[i]);
    }

    for(int i = 0;i<sizeof(mars2);i++)
    {
        printf("mars2[%d] = %c address stored at ==> %d (decimal value) ==> %p (hexadecimal value) \n",i,mars2[i],mars2[i],&mars2[i]);
    }

    for(int i = 0;i<sizeof(mars3);i++)
    {
        printf("mars3[%d] = %d address stored at ==> %d (decimal value) ==> %p (hexadecimal value) \n",i,mars3[i],mars2[i],&mars3[i]);
    }

    return 0;

/*
mars1[0] = a address stored at ==> 97 (decimal value) ==> 000000000061FE0F (hexadecimal value)
mars1[1] = p address stored at ==> 112 (decimal value) ==> 000000000061FE10 (hexadecimal value)
mars1[2] = p address stored at ==> 112 (decimal value) ==> 000000000061FE11 (hexadecimal value)
mars1[3] = l address stored at ==> 108 (decimal value) ==> 000000000061FE12 (hexadecimal value)
mars1[4] = e address stored at ==> 101 (decimal value) ==> 000000000061FE13 (hexadecimal value)

mars2[0] = l address stored at ==> 108 (decimal value) ==> 000000000061FE0A (hexadecimal value)
mars2[1] = e address stored at ==> 101 (decimal value) ==> 000000000061FE0B (hexadecimal value)
mars2[2] = m address stored at ==> 109 (decimal value) ==> 000000000061FE0C (hexadecimal value)
mars2[3] = o address stored at ==> 111 (decimal value) ==> 000000000061FE0D (hexadecimal value)
mars2[4] = n address stored at ==> 110 (decimal value) ==> 000000000061FE0E (hexadecimal value)

mars3[0] = 1 address stored at ==> 108 (decimal value) ==> 000000000061FDF0 (hexadecimal value)
mars3[1] = 2 address stored at ==> 101 (decimal value) ==> 000000000061FDF4 (hexadecimal value)
mars3[2] = 3 address stored at ==> 109 (decimal value) ==> 000000000061FDF8 (hexadecimal value)
mars3[3] = 4 address stored at ==> 111 (decimal value) ==> 000000000061FDFC (hexadecimal value)
mars3[4] = 5 address stored at ==> 110 (decimal value) ==> 000000000061FE00 (hexadecimal value)
mars3[5] = 0 address stored at ==> 97 (decimal value) ==> 000000000061FE04 (hexadecimal value)

// 4 byte differend
// & int / float il buffer overflow varathu
*/
}

// #2    pointer decimal , hexadecimal address ( without buffer overflow ==> null value )##############################################################

#include<stdio.h>               ///fully explain in my programmng notes must learn about
int main()
{
    char mars1[6]={"apple"};
    char mars2[6]={'l','e','m','o','n'};
    int mars3[6]={1,2,3,4,5};


    for(int i = 0;i<sizeof(mars1);i++)
    {
        printf("mars1[%d] = %c address stored at ==> %d (decimal value) ==> %p (hexadecimal value) \n",i,mars1[i],mars1[i],&mars1[i]);
    }

    for(int i = 0;i<sizeof(mars2);i++)
    {
        printf("mars2[%d] = %c address stored at ==> %d (decimal value) ==> %p (hexadecimal value) \n",i,mars2[i],mars2[i],&mars2[i]);
    }

    for(int i = 0;i<sizeof(mars3);i++)
    {
        printf("mars3[%d] = %d address stored at ==> %d (decimal value) ==> %p (hexadecimal value) \n",i,mars3[i],mars2[i],&mars3[i]);
    }

    return 0;

/*
mars1[0] = a address stored at ==> 97 (decimal value) ==> 000000000061FE0E (hexadecimal value)
mars1[1] = p address stored at ==> 112 (decimal value) ==> 000000000061FE0F (hexadecimal value)
mars1[2] = p address stored at ==> 112 (decimal value) ==> 000000000061FE10 (hexadecimal value)
mars1[3] = l address stored at ==> 108 (decimal value) ==> 000000000061FE11 (hexadecimal value)
mars1[4] = e address stored at ==> 101 (decimal value) ==> 000000000061FE12 (hexadecimal value)
mars1[5] =  address stored at ==> 0 (decimal value) ==> 000000000061FE13 (hexadecimal value)

mars2[0] = l address stored at ==> 108 (decimal value) ==> 000000000061FE08 (hexadecimal value)
mars2[1] = e address stored at ==> 101 (decimal value) ==> 000000000061FE09 (hexadecimal value)
mars2[2] = m address stored at ==> 109 (decimal value) ==> 000000000061FE0A (hexadecimal value)
mars2[3] = o address stored at ==> 111 (decimal value) ==> 000000000061FE0B (hexadecimal value)
mars2[4] = n address stored at ==> 110 (decimal value) ==> 000000000061FE0C (hexadecimal value)
mars2[5] =  address stored at ==> 0 (decimal value) ==> 000000000061FE0D (hexadecimal value)

mars3[0] = 1 address stored at ==> 108 (decimal value) ==> 000000000061FDF0 (hexadecimal value)
mars3[1] = 2 address stored at ==> 101 (decimal value) ==> 000000000061FDF4 (hexadecimal value)
mars3[2] = 3 address stored at ==> 109 (decimal value) ==> 000000000061FDF8 (hexadecimal value)
mars3[3] = 4 address stored at ==> 111 (decimal value) ==> 000000000061FDFC (hexadecimal value)
mars3[4] = 5 address stored at ==> 110 (decimal value) ==> 000000000061FE00 (hexadecimal value)
mars3[5] = 0 address stored at ==> 0 (decimal value) ==> 000000000061FE04 (hexadecimal value)

// 0 null value (emty) --> like overflow aagamal thaduppusuvar amaiththal
// naam 6 koduththathal buffer overflow aagathu ange null value print aagum
// null value eththanaium varalam
//so #1 code il  null value illathtthal buffer overflow  aahiyathu
*/
}

###############################################################################################################################################################

    char mars1[]={"apple"};
    char mars2[5]={"beets"};
    char mars3[5]={'l','e','m','o','n'};
    char mars4[]={'M','A','N','G','O'};

//this buffer overflow only work string data type not int , float
//mars 1,2 itku emty box use pannalam overflow varrathu but mars 3,4 itku number ida vendum or null value set panna vendum
// char mars3[5]={'l','e','m','o','n','/0'}; ivvaru null value edukka vendum

// summary
// int or float array il scanf use panni input vaanga vendumayin for loob use panna vendum
// read my programming note
// ivvaraana kaaranaththitkaha string data type uruvakkappattathu

