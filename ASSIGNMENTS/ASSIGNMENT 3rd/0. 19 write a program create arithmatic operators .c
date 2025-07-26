#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';
    int Num1 =0, Num2 = 0;
  printf("\n=++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=");

    printf("\n Enter a Operator for Mathematical Calculation :  \n\n");
    scanf(" %c",&ch);

    printf("\n Enter First Number  :  \n");
    scanf(" %d",&Num1);
    printf("\n Enter Second Number  :  \n");
    scanf(" %d",&Num2);

  printf("\n=++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=");

    switch(ch)
    {
        case '+' :

            printf("\n\n ADDITION of Given Numbers is : %d ",Num1+Num2);
            break;

        case '-':

            printf("\n\n SUB of Given Numbers is : %d ",Num1-Num2);
            break;

        case '*':

            printf("\n\n MUL of Given Numbers is : %d ",Num1*Num2);
            break;

        case '/':

            printf("\n\n DIV  of Given Numbers is : %d ",Num1/Num2);
            break;
    }

    printf("\n=++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=");


    getch();
    return 0;
}
