#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;

    printf("\n Enter a character :");
    scanf("\n %c",&ch);

    if(ch=='a'|| ch=='i' || ch=='e' || ch=='o' || ch=='u' || ch=='A'  || ch=='E' || ch=='I' || ch=='o' || ch=='U')
    {
        printf("\n The given character %c is VOWEL",ch);
    }
    else
    {
       printf("\n The given character %c is  NOT VOWEL",ch);
    }
    getch();
    return 0;

}
