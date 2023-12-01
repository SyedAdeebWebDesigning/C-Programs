#include <stdio.h>

int main()
{
    char grade;
    float num1, num2, num3, num4, num5, percentage, totalMarks;
    printf("Enter the marks of first subject: ");
    scanf("%f", &num1);
    printf("Enter the marks of second subject: ");
    scanf("%f", &num2);
    printf("Enter the marks of third subject: ");
    scanf("%f", &num3);
    printf("Enter the marks of forth subject: ");
    scanf("%f", &num4);
    printf("Enter the marks of fifth subject: ");
    scanf("%f", &num5);

    totalMarks = num1 + num2 + num3 + num4 + num5;
    percentage = (totalMarks / 500) * 100;

    if (percentage >= 80)
    {
        grade = 'A';
    }
    else if (percentage >= 70)
    {
        grade = 'B';
    }
    else if (percentage >= 60)
    {
        grade = 'C';
    }
    else if (percentage >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Grade is %c\n", grade);
    printf("Percentage is: %.2f\n", percentage);
    return 0;
}
