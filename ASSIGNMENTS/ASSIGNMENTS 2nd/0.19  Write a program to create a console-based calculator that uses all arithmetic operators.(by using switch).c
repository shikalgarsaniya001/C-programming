#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b, oprators;

    printf("\n Enter a oprators (+,-,*,/,%):");
    scanf("\n %d",&oprators);

    printf("\n Enter a First number :");
    scanf("\n %d",&a);

    printf("\n Enter a secound number :");
    scanf("\n %d",&b);

    switch( a,b,oprators)

    case '+':
        {
            printf("a+b=%d",a+b);
        }


}
