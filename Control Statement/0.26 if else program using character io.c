#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter a character :");
    scanf("%c",&ch);

    if(ch=='A')
    {
        printf("\n Karad");
    }
    else if(ch=='B')
    {
        printf("\n Shenoli");
    }
    else if(ch=='C')
    {
        printf("\n Satara");
    }
    else if(ch=='D')
    {
        printf("\n Vita");
    }
    else if(ch=='E')
    {
        printf("\n Takari");
    }
    else
    {
        printf("\n Invalid character");
    }
    getch();

    return 0;
}
