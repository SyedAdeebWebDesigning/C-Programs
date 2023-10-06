#include <stdio.h>

int main()
{
    char grade;
    float num1, num2, num3, num4, percentage;
    printf("Enter the marks of first subject\n");
    scanf("%f", &num1);
    printf("Enter the marks of second subject\n");
    scanf("%f", &num2);
    printf("Enter the marks of third subject\n");
    scanf("%f", &num3);
    printf("Enter the marks of forth subject\n");
    scanf("%f", &num4);

    percentage = ((num1 + num2 + num3 + num4) / 400) * 100;

    if (percentage >= 85)
    {
        grade = 'A';
        printf("Grade is %c", grade);
    }
    else if (percentage >= 70)
    {
        grade = 'B';
        printf("Grade is %c", grade);
    }
    else if (percentage >= 55)
    {
        grade = 'C';
        printf("Grade is %c", grade);
    }
    else if (percentage >= 40)
    {
        grade = 'D';
        printf("Grade is %c", grade);
    }
    else
    {
        grade = 'E';
        printf("Grade is %c", grade);
    }
    printf("\nPercentage is: %.2f", percentage);
    return 0;
}