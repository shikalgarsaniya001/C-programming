#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number (1-7):");
    scanf("\n %d",&num);

    printf("\n++++++++++++++++++++++++++++++");

    printf("\n THE DAY OF WEEK IS :\n");

    if(num==1)
    {
        printf("\n Sunday");
    }
    else if(num==2)
    {
        printf("\n Monday");
    }
    else if(num==3)
    {
        printf("\n tusday");
    }
    else if(num==4)
    {
        printf("\n Wednesday");
    }
    else if(num==5)
    {
        printf("\n Thusday");
    }
    else if (num==6)
    {
        printf("\n Frieday");
    }
    else if(num==7)
    {
        printf("\n Saturday");
    }

     printf("\n++++++++++++++++++++++++++++++");

    getch();
    return 0;
}
