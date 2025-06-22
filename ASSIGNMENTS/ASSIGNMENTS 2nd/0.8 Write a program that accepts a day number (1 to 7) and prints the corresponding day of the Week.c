#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number (1 to 7) :");
    scanf("\n %d",&num);

    if(num==1)
    {
        printf("\n SUNDAY");
    }
    else if (num==2)
    {
        printf("\n MONDAY");
    }
    else if(num==3)
    {
        printf("\n THESDAY");
    }
    else if(num==4)
    {
        printf("\n WEDNESDAY");
    }
    else if (num==5)
    {
        printf("\n THURSDAY");
    }
    else if(num==6)
    {
        printf("\n FRIEDAY");
    }
    else if(num==7)
    {
        printf("\n SATURDAY");
    }
    else
    {
        printf("\n INVALIDE DAY");
    }
    getch();
    return 0;
}
