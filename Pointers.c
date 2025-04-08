////////////////////////////// Pointer ///////////////////////////////////////////////
//must watch video & notes

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

###############################################################################################################################################################
###############################################################################################################################################################
###############################################################################################################################################################
                                       ______________  Array With Pointers ___________


         #include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int b =60;

    printf("%d\n",a);
    printf("%d\n",*a);
    printf("%d\n",&a);
    printf("%d\n",*&a);
    printf("%d\n",&a[2]);
    printf("%d\n",*&a[2]);    // a[2] in address in value inai kattum

    printf("%p\n",a);
    printf("%p\n",a[2]);
    printf("%p\n",*&a);
    printf("%p\n",*a);        // array il pointer iruppathal ithuku output varum
                              //so array il maraimugamaaga pointer work aagirathu

    printf("%d\n",&b);
    printf("%d\n",*&b);
    //printf("%d\n",*b);      // array il pointer illathathal ithuku output varathu
    //printf("%p\n",*b);
    printf("%p\n",&b);
    printf("%p\n",*&b);

}

//learn from this  errors###################################################################################################################################


         #include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int b =60;


    printf("%d\n",*a);
    printf("%p\n",*a);

    printf("%d\n",*b);  //error
    printf("%p\n",*b);  //error

}

// try this ###################################################################################################################################################


#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    for(int i =0;i<5;i++)
        printf("%d => %d\n",a[i],*(a+i));
}

// try this ###################################################################################################################################################

#include<stdio.h>
int main()
{
    int a[5],i;

    for(i =0;i<5;i++)
        scanf("%d => %d\n",&a[i],&*(a+i));

    for(i =0;i<5;i++)
        printf("%d => %d\n",a[i],*(a+i));
}

// #1 array copy address #######################################################################################################################################

#include<stdio.h>
int main()
{
    int a [5]={10,20,30,40,50},i;
    int b[5];

    for(i=0;i<5;i++)
        b[i]=a[i];               // don't copy like this => a[i]=b[i];

    for(i=0;i<5;i++)
        printf("%d\n",b[i]);
}

// #2 array copy ###############################################################################################################################################

#include<stdio.h>
int main()
{
    int a [5]={10,20,30,40,50},i;
    int *b;                         // pointer i veiththuthan address inai store panna mudium

    b=a;
    for(i=0;i<5;i++)
        printf("%d\n",b[i]);
}


// #3 array copy ################################################################################################################################################

#include<stdio.h>
int main()
{
    int a [5]={10,20,30,40,50},i;
    int *b;                         // pointer i veiththuthan address inai store panna mudium

    b=a;
    for(i=0;i<5;i++)
        printf("%d\n",*b++);
}

// #4 array copy different method  ################################################################################################################################

#include<stdio.h>
int main()
{
    int a [5]={10,20,30,40,50},i;
    int *b;                         // pointer i veiththuthan address inai store panna mudium

    b=a+2;
    printf("%d\n",b[2]);
}

// #5 array copy ################################################################################################################################################

#include<stdio.h>
int main()
{
    int a [5]={10,20,30,40,50},i;
    int *b;                         // pointer i veiththuthan address inai store panna mudium

    b=a;
    printf("%d\n",b[0]);

    for(i=0;i<5;i++)
        printf("%d\n",b+i);
    for(i=0;i<5;i++)
        printf("%d\n",*(b+i));

    printf("address of a %d\n",a);
    printf("address of b %d\n",&b);
}

// Prectical ########################################################################################################################################################

#include<stdio.h>
int main()
{
    char a[]="Cyber security";
    char b[]="artificial intellingence";
    char *i = a;                             // i,j il a,b ilulla data save aagavillai maaraaga a,b ilulla base address than save aagiullathu
    char *j = b;                             // athilulla adddress i vaiththuthan athanudaiya data i print pannuhirathu

    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",i);
    printf("%s\n",j);

    printf("%d\n",&a);
    printf("%d\n",&b);
    printf("%d\n",&i);
    printf("%d\n",&j);
    printf("%d\n",*&a);

    printf("%p\n",a);
    printf("%d\n",*a);                    // 1st find base address -> 2nd find antha address ilulla value(c) -> 3rd %d iruppathal c inai decimalil matri tharum(ASCII)
    printf("%c\n",*a);                    // %c il kettathal antha data inai charecter il tharum
}

// Prectical ########################################################################################################################################################

#include<stdio.h>
int main()
{
    char a[]="Cyber security";
    char *i = a;

    i[7]='M';

    printf("%s\n",a);
}

// array of pointers ################################################################################################################################################

--------------------------------------------------------------------------------------
| Index   | Address of Pointer (arr[i]) | Address Stored in arr[i] | Value (*arr[i]) |
--------------------------------------------------------------------------------------
| arr[0]  | 0x2000                      | 0x1000                   | 10              |
| arr[1]  | 0x2004                      | 0x1004                   | 20              |
| arr[2]  | 0x2008                      | 0x1008                   | 30              |
--------------------------------------------------------------------------------------

// array of pointers ################################################################################################################################################

#include<stdio.h>
int main()
{
    int a=3, b=5, c=7;
    int *p[3];

    p[0]=&a;
    p[1]=&b;
    p[2]=&c;

    printf("%p\n",p[0]);
    printf("%d\n\n",*p[0]);

    for(int i=0;i<3;i++)
        printf("%d\n",*p[i]);
}

/*
####################################

        p
  +---+---+---+
  |11 |22 |33 |    (example address)
  +---+---+---+
  p[0] p[1] p[2]   (array)

####################################

        *p
  +---+---+---+
  | 3 | 5 | 7 |   (value)
  +---+---+---+
   11  22  33  (address)

####################################
*/

// Prectical ########################################################################################################################################################

#include<stdio.h>
int main()
{
    int a=3, b=5, c=7;
    int *p[3];

    p[0]=&a;
    p[1]=&b;
    p[2]=&c;

    printf("%p\n",p[0]);
    printf("%d\n",*p[0]);
    printf("Bash Address %d\n\n",p);

    for(int i=0;i<3;i++)
        printf("%d\n",*p[i]);

    printf("p[0] = %d\n",p[0]);
    printf("p[1] = %d\n",p[1]);
    printf("p[2] = %d\n\n",p[2]);

    printf("*p[0] = %d\n",*p[0]);
    printf("*p[1] = %d\n",*p[1]);
    printf("*p[2] = %d\n\n",*p[2]);

    printf("&p[0] = %d\n",&p[0]);
    printf("&p[1] = %d\n",&p[1]);
    printf("&p[2] = %d\n\n",&p[2]);

}

// Prectical ########################################################################################################################################################


#include<stdio.h>
int main()
{
    int arr[3]={10,20,30};
    int *i=arr;
    int (*ptr)[3]=&arr;    // or you can use this function int *ptr[3];
                                                      //   *ptr=&arr;

    printf("%d\n",i);
    printf("%d\n",&i);
    printf("%d\n",ptr);
    printf("%d\n",*i);
    printf("%d\n",*ptr);
    printf("%d\n\n",**ptr);          // pointer itkul pointer

    printf("arr[0] = %d\n",&arr[0]);
    printf("arr[1] = %d\n",&arr[1]);
    printf("arr[2] = %d\n\n",&arr[2]);

    printf("ptr[0] = %d\n",&ptr[0]);
    printf("ptr[1] = %d\n",&ptr[1]);
    printf("ptr[2] = %d\n",&ptr[2]);
}

// Prectical ##############################################################################################################################################

#include<stdio.h>
int main()
{
    char a[]="Cyber security";
    char b[]="artificial intellingence";
    char *i = a;                             // i,j il a,b ilulla data save aagavillai maaraaga a,b ilulla base address than save aagiullathu
    char *j = b;                             // athilulla adddress i vaiththuthan athanudaiya data i print pannuhirathu

    printf("1 = %s\n",a);
    printf("2 = %s\n",i);
    printf("3 = %s\n",j);
    a[2] = 'H';
    printf("4 = %s\n",i);

}

###############################################################################################################################################################
###############################################################################################################################################################
###############################################################################################################################################################
                                       ______________ Function With Array ___________

// find odd , even numbers using functin ######################################################################################################################

#include<stdio.h>
int messi(int num);

int messi(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter the even or odd number: ");
    scanf("%d",&n);
    if (messi(n))
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
}

// find odd , even numbers using while loob function #############################################################################################################

#include<stdio.h>
int messi(int num);

int messi(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    while(1)                                    // 0 inai thavira entha number inaium podalam. 0 vanthal operation break aagum
    {
    printf("Enter the even or odd number: ");
    scanf("%d",&n);
    if (n==0)
    {
    break;
    }
    if(messi(n))
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    }
}

// Prectical ##############################################################################################################################################

#include<stdio.h>

char* upper(char *string)
{
    printf("string received is : %s",string);
}

int main()
{
char s[100];
printf("enter a word: ");
scanf("%s",s);
printf("the string is stored at %d, %d\n",s,&s[0]);
upper(s);
}

// sum of value ###########################################################################################################################################

#include<stdio.h>

int add(int *num , int count)
{
    int result = 0;
    for(int i=0;i<count;i++)
    {
        result = num[i] + result;
        printf("result : %d , Num: %d\n",result,num[i]);
    }
    return result;
}

int main()
{
    int a[]={10,20,30,40,50,60,70,80};
    printf("sum is %d\n",add(a,sizeof(a)/sizeof(int)));
}

// change uppercase #########################################################################################################################################

#include<stdio.h>
#include<ctype.h>                              // toupper

void* upper(char *string)
{
    printf("string received is : %s",string);
    for(int i=0;i<=sizeof(string);i++)
    {
        string[i]=toupper(string[i]);           // toupper change uppercase
    }
}

int main()
{
char s[100];
printf("enter a word: ");
scanf("%s",s);
printf("the string is stored at %d, %d\n",s,&s[0]);
upper(s);
printf("Upper case letters : %s\n",s);
}

// change uppercase get input from useer ######################################################################################################################

#include<stdio.h>

void upper(char *name);
int capital(char c);
int lower (char c);
void upper(char *name)
{
    printf("name received is : %s",name);
    for(int i=0;i<=sizeof(name);i++)
    {
        if(capital(name[i]))
            continue;
        else if(lower(name[i]))
            name[i]= name[i]-32;                 //capital to simple letters  you can change A32)

    }
}

int capital(char c)
{
    if(c>=65 && c<=90)
        return 1;
    else
        return 0;
}

int lower(char c)
{
    if(c>=97 && c<=122)
        return 1;
    else
        return 0;
}

int main()
{
char s[100];
printf("enter a word: ");
scanf("%s",s);
printf("the name is stored at %d, %d\n",s,&s[0]);
upper(s);
printf("Upper case letters : %s\n",s);
}
