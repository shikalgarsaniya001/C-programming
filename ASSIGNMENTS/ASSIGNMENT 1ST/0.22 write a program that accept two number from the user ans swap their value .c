
#include <stdio.h>

    int main()
    {

        int num1, num2;

        printf("\n Enter a number:");
        scanf("\n %d",&num1);

        printf("\n Enter a number:");
        scanf("\n %d",&num2);

        printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
        getch();

        return 0;

    }
