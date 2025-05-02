#include<stdio.h>
#include<stdio.h>
int main()

{
    int a,b,c,d,e,f, g,Sub;

    printf("\n **********************************************************************");

    printf("\n Enter a 1st number :");
    scanf("%d",&a);

    printf("\n Enter a 2nd number :");
    scanf("%d",&b);

    printf("\n Enter a 3rd number :");
    scanf("%d",&c);

    printf("\n Enter a 4th number :");
    scanf("%d",&d);

    printf("\n Enter a 5th number :");
    scanf("%d",&e);

    printf("\n Enter a 6th number :");
    scanf("%d",&f);

    printf("\n Enter a 7th number :");
    scanf("%d",&g);


    printf("\n **********************************************************************");

    Sub = a - b - c - d - e - f - g;

    printf("\n SUBSTRACTION  of %d - %d - %d - %d - %d - %d - %d = %d ",a,b,c,d,e,f,g,Sub);

    printf("\n **********************************************************************");

    getch();

    return 0;
}
