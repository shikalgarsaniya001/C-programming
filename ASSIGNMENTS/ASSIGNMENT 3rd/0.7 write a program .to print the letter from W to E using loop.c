#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n given letter from W to E \n");
    for (ch='W'; ch>='E'; ch--)
    {
        printf("\n %c",ch);
    }
    getch();
    return 0;
}

