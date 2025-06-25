#include <stdio.h>

int main()
{

    char grade;
    int percent;
    printf("Enter Your Perntage : ");
    scanf("%d", &percent);

    grade = percent >= 80 && percent <= 100 ? 'A' : percent >= 60 ? 'B'
                                                : percent >= 40   ? 'C'
                                                : percent >= 30   ? 'D'
                                                                  : 'F';

    printf("Your grade is: %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("\n Excellent!! You pass with great score...");
        break;
    case 'B':
        printf("\n Very Good!! You Tried hard!!");
        break;
    case 'C':
        printf("\n Good!! You Need to work little bit more!!");
        break;
    case 'D':
        printf("\n You have to work hard!!");
        break;
    default:
        printf("\n See You In Next Year!!");
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("\n You are Eligible for next round");
    }
    else
    {
        printf("\n Please try again Next time");
    }

    return 0;
}