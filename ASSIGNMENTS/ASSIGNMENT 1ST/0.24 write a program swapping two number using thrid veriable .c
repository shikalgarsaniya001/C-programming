#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,temp;

    printf("\n Enter a 1st number :");
    scanf("\n %d",&num1);

    printf("\n Enter a 2nd number :");
    scanf("\n %d",&num2);

    printf("\n Befour swapping number num=%d,num=%d",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("\n After swapping number num=%d,num=%d",num1,num2);

    getch();
    return 0;
}
