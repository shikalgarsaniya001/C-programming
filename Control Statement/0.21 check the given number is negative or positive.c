#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if (num == 0 )
    {
        printf("\n noutral");
    }
    else if(num>0)
    {
        printf("\n the given number %d is positive",num);
    }
    else{
        printf("\n The given number %d is negative",num);
    }
    getch();
    return 0;
}
