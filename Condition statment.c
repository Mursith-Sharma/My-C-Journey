############################### 4 types conditions #############################
///simple if conditional

#include<stdio.h>
int main()
{
    int messi;
    printf("Enter thropies & find who is messi: ");
    scanf("%d",&messi);
    if(messi>46)
        printf("Messi is GOAT");
}

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

///if , else condition

#include<stdio.h>
int main()
{
    int messi;
    printf("Enter thropies & find who is messi: ");
    scanf("%d",&messi);
    if(messi>46)
        printf("Messi is GOAT");
    else
        printf("Ronaldo is goat");
}

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

///if else ladder statment (else if))

#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>0 && age<5)
        printf("Toddler");
    else if(age>=5 && age<12)
        printf("child");
    else if(age>=12 && age<18)
        printf("Teenager");
    else if(age>=18 && age<25)
        printf("Young Adult");
    else if(age>=25 && age<40)
        printf("Adult");
    else if(age>=40 && age<60)
        printf("Middle-Aged Adult");
    else if(age>=60 && age<180)
        printf("Senior / Elderly");
    else
        printf("you fool");
}

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

///Nested if condition

#include<stdio.h>
int main()
{
    int score;                                   ///dribbling score
    printf("Enter dribbling score: ");
    scanf("%d",&score);

    if(score>30 && score<=100)
        {
            if(score>=60 && score<=100)
                printf("messi");
            else
                printf("messi & neymar");
        }
    else
        printf("invalid");
}

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
