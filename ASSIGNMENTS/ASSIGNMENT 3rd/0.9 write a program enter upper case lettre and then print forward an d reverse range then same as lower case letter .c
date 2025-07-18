#include<stdio.h>
#include<conio.h>
int main()
{
    char ch,start,end;

    printf("\n Enter a start letter :");
    scanf("\n %c",&start);

    printf("\n Enter a end letter:");
    scanf("\n %c",&end);


    if(ch>='A'&& ch<='Z' )
    {
            printf("\n FORWORD RANG OF THE GIVEN CHARACTER IS :");

              for(ch=start;ch<=end;ch++)
          {
               printf("\n %c",ch);
          }
          printf("\n --------------------------------------------------");
          printf("\n REVERSE RANG OF THE GIVEN CHARACTER IS :");

             for(ch=end;ch>=start;ch--)
          {
                printf("\n %c",ch);
          }
    }
    else if(ch>='a' && ch<='z')
        {

            printf("\n FORWORD RANG OF THE GIVEN CHARACTER IS :");

              for(ch=start;ch<=end;ch++)
          {
               printf("\n %c",ch);
          }
          printf("\n --------------------------------------------------");
          printf("\n REVERSE RANG OF THE GIVEN CHARACTER IS :");

             for(ch=end;ch>=start;ch--)
          {
                printf("\n %c",ch);
          }
        }

        else
        {
            printf("\n INVALIDE CHARACTER");
        }
    getch();
    return 0;

}

