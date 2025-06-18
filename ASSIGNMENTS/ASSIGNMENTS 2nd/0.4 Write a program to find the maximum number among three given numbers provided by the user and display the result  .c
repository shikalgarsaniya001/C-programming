#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,No3=0;
    printf("\n -----------------################------------------");

    printf("\n Enter 1st number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd number :");
    scanf("%d",&No2);

    printf("\n Enter 3rd number :");
    scanf("%d",&No3);

    if((No1==No2)&&(No2==No3))
    {
        printf("\n All three numbers are equal");
    }
    else if((No1>=No2)&& (No1>=No3))
    {
        printf("\n maximu number %d is ",No1);
    }
     else if((No2>=No1)&& (No2>=No3))
     {
        printf("\n maximu number %d is ",No2);
     }
     else if((No3>=No1)&& (No3>=No2))
     {
        printf("\n maximu number %d is ",No3);
     }
    else
    {
        printf("\n invalid");
    }
    printf("\n Thank you");

    printf("\n ------------------------################-----------------");

    getch();
    return 0;
}


