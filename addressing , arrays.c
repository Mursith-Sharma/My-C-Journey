#include<stdio.h>               ///fully explain in my programmng notes must learn about
int main()
{
    char mars1[]={"apple"};
    char mars2[5]={"beets"};
    char mars3[5]={'l','e','m','o','n'};
    char mars4[]={'M','A','N','G','O'};

    int mars5[]={1,2,3,4,5};
    int mars6[5]={1,2,3,4,5};

    printf("mars1: %s\n",mars1);        //}
    printf("mars2: %s\n",mars2);           //===> Error conncept
    printf("mars3: %s\n",mars3);
    printf("mars4: %s\n",mars4);        //}
    printf("\n\n");
    printf("mars5: %d\n",mars5);
    printf("mars6: %d\n",mars6);

}

//output here

mars1: apple
mars2: beetsapple
mars3: lemonbeetsapple
mars4: MANGOlemonbeetsapple

mars5: 6422000
mars6: 6421968

//this buffer overflow only work string data type not int , float
//mars 1,2 itku emty box use pannalam overflow varrathu but mars 3,4 itku number ida vendum or null value set panna vendum

//addressing
// according to programming language direct memory address access only to c programming
// & access some low level language (mechine language)
// according to google     ==> c is high level language
// according to expereince ==> c is low level language ( bcz we can access direct memory & hardware devices using c language)
//compailer (high level language to low level language translator)

#include<stdio.h>
int main()
{
    int i=0;
    float j=4.2;
    char k='c';

    printf("int i has value %d stored in address %p\n",i,&i);    //address = 000000000061FE1C  (1c)
    printf("float j has value %d stored in address %p\n",j,&j);  //address = 000000000061FE18  (18)
    printf("int k has value %d stored in address %p\n",k,&k);    //address =  000000000061FE17  (17)
                                                                 //this address(hexadecimal formet)
    // change hexadecimal to decimal ==> 1c , 18 ,17
    // 1c => 28
    // 18 => 24
    // 17 => 23
}
