#include<stdio.h>
#include<string.h>                        // learn notes , videos

struct student     // 4 byte
{
    double name;   // 8 byte
    double age;    // 8 byte
};


struct staff       // 4
{
    int name;      // 4
    int age;       // 4
    int id;        // 4
    char phone;     // 1
};


struct teacher     // 4
{
    int name;      // 4
    double age;    // 8
};


struct man         // 4
{
    char name;     // 1
    double age;    // 8
};


int main()
{
    struct student a;
    struct staff b;
    struct teacher c;
    struct man d;

    printf("size of struct student = %d\n",sizeof(a));         // 20 byte vara vendum  but 16
    printf("size of struct staff = %d\n",sizeof(b));           // 20 byte vara vendum  but 16
    printf("size of struct teacher = %d\n",sizeof(c));         // 16 byte vara vendum
    printf("size of struct man = %d\n",sizeof(d));             // 13 byte vara vendum  but 16



    // struct 4 byte edukkum.
    // sometimes 4 byte edukkamalum pogalam
    // different data type use pannal struct itku byte edukkum
    // but ore data type use pannal struct itku byte edukkathu
    // sometime character problem varum so read notes
}
