#include<stdio.h>
#include<conio.h>
int main()
{
    int NO1,NO2,NO3;

    printf("\n **************************");

    printf("\n Enter a 1st number :");
    scanf("%d",&NO1);
    printf("\n Enter a 2nd number :");
    scanf("%d",&NO2);
    printf("\n Enter a 3rd  number :");
    scanf("%d",&NO3);

    printf("\n **************************");

    if(NO1>NO2 && NO1>NO3)
    {
        printf("\n %d is Maximum number",NO1);
    }
    else if (NO2>NO1 && NO2>NO3)
    {
        printf("\n %d is Maximum number",NO2);
    }
    else
    {
            printf("\n %d is Maximum number",NO3);
    }
    printf("\n **************************");

    getch();

    return 0;


}
