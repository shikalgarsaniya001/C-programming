#include<stdio.h>
#include<conio.h>

int main()
{
    int NO1=0, NO2=0, NO3=0;
    up:
    printf("\n **************************");

    printf("\n Enter a *1st number:");
    scanf("%d",&NO1);

    printf("\n Enter a $2nd number:");
    scanf("%d",&NO2);

    printf("\n Enter a #3rd number:");
    scanf("%d",&NO3);

     printf("\n ***************************\n ");


    if((NO1==NO2 ) && (NO2==NO3))
    {
        printf("\n The given 3 number are Equal",NO1,NO2,NO3);
        goto up;
    }

   else if ((NO1>=NO2 )&& (NO1>=NO3))
    {
        printf("\ The *%d number is Maximum ",NO1);
    }

    else if((NO2>=NO1) && (NO2>=NO3))
    {
        printf("\ The $%d number is Maximum ",NO2);
    }

    else if((NO3>=NO1) && (NO3>=NO2))
    {
        printf("\n The #%d number is Maximum ",NO3);
    }

    else
    {
        printf("\n Invalid number");
    }

    printf("\n ***************************");

    getch();

    return 0;


}
