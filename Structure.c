int a = 5

variable      = (int a)
variable name = (a)
data type     = (int)
data          = (5)

//1 student database ##############################################################################

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
#########################################################################################################
