#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n There are 4 division in school as A,B,C,D\n");

    printf("\n Enter a division :");
    scanf("\n %c",&ch);

    switch(ch)
    {
        case 'A' :
        case 'a':
             {
               printf("\n your exam is at 10 AM");
               break;
             }


        case'B':
        case'b':

            {
                printf("\n your exam is at 10.30 AM");
                break;
            }

        case'C':
        case'c':

            {
                printf("\n your exam is at 1 PM");
                break;
            }
        case'D':
        case'd':
            {
                printf("\n your exam is at 1.30 PM");
                break;
            }

    }
            getch();
            return 0;

}
