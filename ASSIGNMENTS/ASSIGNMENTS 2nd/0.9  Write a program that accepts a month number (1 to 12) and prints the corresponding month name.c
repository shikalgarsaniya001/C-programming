#include<stdio.h>
#include<conio.h>
int main()
{
    int MONTH;

    printf("\n Enter a number (1 to 12) :");
    scanf("\n %d",&MONTH);

    if(MONTH==1)
    {
        printf("\n JANUARY");
    }
    else if (MONTH==2)
    {
        printf("\n BEBRUARY");
    }
    else if(MONTH==3)
    {
        printf("\n MARCH");
    }
    else if(MONTH==4)
    {
        printf("\n APRIL");
    }
    else if (MONTH==5)
    {
        printf("\n MAY");
    }
    else if(MONTH==6)
    {
        printf("\n JUNE");
    }
    else if(MONTH==7)
    {
        printf("\n JULY");
    }
    else if(MONTH==8)
    {
        printf("\n AUGUST");
    }
    else if(MONTH==9)
    {
        printf("\n SAPTEMBER");
    }
    else if(MONTH==10)
    {
        printf("\n OCTOBER");
    }
    else if(MONTH==11)
    {
        printf("\n NOVEMBER");
    }
     else if(MONTH==12)
    {
        printf("\n DECEMBER");
    }
    else
    {
        printf("\n INVALIDE MONTH");
    }
    getch();
    return 0;
}

