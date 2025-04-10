int a = 5

variable      = (int a)
variable name = (a)
data type     = (int)
data          = (5)

//1 student database ##############################################################################

#include<stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int age , phone;

    };

    struct student s1;
    printf("Enter name , Age ,Phone number \n");
    scanf("%s %d %d",&s1.name , &s1.age ,&s1.phone);

    printf("\n Name  : %s",s1.name);
    printf("\n age   : %d",s1.age);
    printf("\n Phone : %d",s1.phone);
}

//1 student database Way #2 ##########################################################################

#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
};

int main()
{
    struct student a;                //  struct student ==> variable , a ==> data type
    printf("Enter student details of students \n(your id \n your name \n your age )\n ");
    scanf("%d",&a.id);
    scanf("%s",a.name);
    scanf("%d",&a.age);

    printf("your details \n");

    printf("student id = %d\n",a.id);
    printf("student name = %s\n",a.name);
    printf("student age = %d\n",a.age);
}

// many students database ##########################################################################

#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
};

int main()
{
    struct student a[3];                //  struct student ==> variable , a ==> data type
    int i;
    for(i=0;i<3;i++)
    {

    printf("Enter 3 students details of students (1. your id 2. your name 3. your age |)\n");
    scanf("%d",&a[i].id);
    scanf("%s",a[i].name);
    scanf("%d",&a[i].age);
    }

    for(i=0;i<3;i++)
    {
    printf("your details \n");

    printf("student id = %d\n",a[i].id);
    printf("student name = %s\n",a[i].name);
    printf("student age = %d\n",a[i].age);
    printf("\n________________________________\n\n");
    }
}

// many students database #2 ##########################################################################

#include<stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int age , phone;

    };

    struct student s[10];
    for(int i =0;i<10;i++)
    {
            printf("Enter name : ");
            scanf("%s",&s[i].name);

            printf("Enter age : ");
            scanf("%d",&s[i].age);

            printf("Enter phone number : ");
            scanf("%d",&s[i].phone);
    }

    for(int i =0;i<10;i++)
    {
            printf("\n Name  : %s",s[i].name);
            printf("\n age   : %d",s[i].age);
            printf("\n Phone : %d",s[i].phone);
    }

}

// Pointers to structure ##########################################################################

#include<stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int age , phone;

    };

    struct student s[10];
    struct student *p;
    for(int i =0;i<10;i++)
    {
            printf("Enter name : ");
            scanf("%s",&p->name);

            printf("Enter age : ");
            scanf("%d",&p->age);

            printf("Enter phone number : ");
            scanf("%d",&p->phone);
    }

    for(int i =0;i<10;i++)
    {
            printf("\n Name  : %s",p->name);
            printf("\n age   : %d",p->age);
            printf("\n Phone : %d",p->phone);
    }

}

// structure & function #1 ##########################################################################

#include<stdio.h>

void printstruct(char[],int ,int);

int main()
{
    struct student
    {
        char name[25];
        int age , phone;
    };

    struct student s={"mursith",22,123};
    printstruct(s.name,s.age,s.phone);

}

void printstruct(char name[],int age,int phone)
{
        printf("\n Name  : %s",name);
        printf("\n age   : %d",age);
        printf("\n Phone : %d",phone);
}

// structure & function #2 ##########################################################################

#include<stdio.h>

   struct student                        //       }
    {
        char name[25];                   //           ----} Define / definition
        int age , phone;
    };                                   //       }

void printstruc(struct student);         //                 Call function
int main()

{
    struct student s={"mursith",22,123};
    printstruc(s);

}

void printstruc(struct student a)         //                 Declaration
{
        printf("\n Name  : %s",a.name);
        printf("\n age   : %d",a.age);
        printf("\n Phone : %d",a.phone);
}

// returning from function ########################################################################


#include<stdio.h>
#include<string.h>

   struct student
    {
        char name[25];
        int age , phone;
    };
struct student creatstr(char [],int ,int);
int main()

{
    struct student s1;
    s1=creatstr("mursith",22,123);

    printf("\n Name  : %s",s1.name);
    printf("\n age   : %d",s1.age);
    printf("\n Phone : %d",s1.phone);

}

struct student creatstr(char name[],int age ,int phone)
{
        struct student s;

        strcpy (s.name , name);
        s.age = age;
        s.phone = phone;

        return s;
}

// pointer to structure ########################################################################

#include<stdio.h>
#include<string.h>

   struct student
    {
        char name[25];
        int age , phone;
    };
struct student *creatstr(char [],int ,int);
int main()

{
    struct student *p;

    p=creatstr("mursith",22,123);

    printf("\n Name  : %s",p->name);
    printf("\n age   : %d",p->age);
    printf("\n Phone : %d",p->phone);

}

struct student *creatstr(char name[],int age ,int phone)
{
        static struct student s;

        strcpy (s.name , name);
        s.age = age;
        s.phone = phone;

        return &s;
}

#########################################################################################################
