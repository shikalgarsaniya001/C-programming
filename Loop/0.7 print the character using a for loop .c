#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\n UPPER CASE LETTERS");
    for(char ch='A';ch<='Z';ch++)
    {
        printf("\n %c",ch);
    }
    printf("\n\n -----------------------------------------");

    printf("\n\n LOWER CASE LETTERS");

    for(char ch='a';ch<='z';ch++)
    {
        printf("\n %c",ch);
    }
     getch();
     return 0;
}
