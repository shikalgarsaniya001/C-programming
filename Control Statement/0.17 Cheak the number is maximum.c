#include<stdio.h>
#include<conio.h>
int main()
{
    int NO1,NO2;
     UP:

    printf("\n Enter a 1st number :");
    scanf("%d",&NO1);

    printf("\n Enter a 2nd number :");
    scanf("%d",&NO2);

    if(NO1==NO2)
    {
        printf("\n The both number are Equal");
        goto UP;
    }

    else if(NO1>NO2)
    {
        printf("\n %d is maximum number",NO1);
    }

    else
    {
        printf("\n %d is maximum number",NO2);
    }

    getch();

    return 0;

}

