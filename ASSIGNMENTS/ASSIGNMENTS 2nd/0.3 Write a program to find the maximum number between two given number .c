#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0;
    printf("\n -------------########------------");

    printf("\n Enter a 1st number :");
    scanf("%d",&No1);
    printf("\n Enter a 2nd number :");
    scanf("%d",&No2);
    if(No1==No2)
    {
        printf("\n #%d is  both number are equal ");
    }
   else if(No1>No2)
    {
        printf("\n %d is  maximum number ",No1);
    }
    else if(No1<No2)
    {
        printf("\n  %d  is maximum number",No2);
    }
    else
    {
        printf("\n invalid");
    }
    printf("\n thank you");
    printf("\n\n---------------########--------------");
    getch();
    return 0;


}
