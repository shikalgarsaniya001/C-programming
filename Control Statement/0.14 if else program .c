#include<stdio.h>
#include<conio.h>

int main()
{
    int Mark;

    printf("\n Enter a mark :");
    scanf("%d",&Mark);

    if (Mark<=100 && Mark>=80)
    {
        printf("\n Grade A");
    }
    else if (Mark<=80 && Mark>=60)
    {
        printf("\n Grade B");
    }
    else if (Mark<=60 && Mark>=40)
    {
        printf("\n Grade C");
    }
    else if(Mark<=40 && Mark>=35)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n INVALID MARKS");
    }

    getch();
    return 0;

}

