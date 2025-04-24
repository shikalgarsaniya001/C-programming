#include<stdio.h>
#include<conio.h>
int main()
{
    int Day=0;

    printf("\n Enter a given number :");
    scanf("%d",&Day);

    if(Day==1)
    {
        printf("\n Monday");
    }
    else if(Day==2)
    {
        printf("\n Thesday");
    }
    else if(Day==3)
    {
        printf("\n Wednesday");
    }
    else if(Day==4)
    {
        printf("\n Thursday");
    }
    else if(Day==5)
    {
        printf("\n Frieday");
    }
    else if(Day==6)
    {
        printf("\n Saturday");
    }
    else if(Day==7)
    {
        printf("\n Sunday");
    }
    else
    {
        printf("\n Invalid day");
    }

    getch();


    return 0;


}
