#include<stdio.h>
#include<conio.h>
int main()
{
    int age;

    printf("\n Enter a age :");
    scanf("\n %d",&age);

    if(age>=18)
    {
        printf(" \n Adult");
    }
    else if(age>13 && age<18)
    {
        printf("\n Teenager");
    }
    else
    {
        printf("\n child");
    }

    getch();
    return 0;
}
