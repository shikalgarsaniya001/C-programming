#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("\n Enter a (1 to 7) :");
    scanf("\n %d",&day);

     switch(day)

    {
        case 1 : printf("\n MONDAY");
                 break;

        case 2 : printf("\n THESDAY");
                   break;

        case 3 : printf("\n WEDNESDAY");
                  break;

        case 4 : printf("\n THURSDAY");
                   break;

        case 5 : printf("\n FRIEDAY");
                  break;

        case 6 : printf("\n SATURSDAY");
                 break;

        case 7 : printf("\n SUNDAY");
                 break;

    }
    getch();
    return 0;
}


