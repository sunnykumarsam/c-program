/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:-");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("you are eligible to vote in india");
        // default:("your are not");
        // printf("\nyou are not eligible to vote in india");
    }
    

    return 0;
}
