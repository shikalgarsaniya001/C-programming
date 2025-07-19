#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("\n %c",&ch);

    if(ch>='A' &&a ch<='z')
    {
        printf("\n %c is Upper case letter",ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("\n %c is Lower case letter ",ch);
    }
    else
    {
        printf("\n %c is not letter",ch);
    }
    getch();
    return 0;
}
