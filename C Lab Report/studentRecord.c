#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 3
float calculateAverage(int scores[])
{
    float sum = 0;
    for (int i = 0; i < NUM_SUBJECTS; ++i)
    {
        sum += scores[i];
    }
    return sum / NUM_SUBJECTS;
}

int main()
{
    char studentNames[NUM_STUDENTS][50] = {
        "Syed",
        "Adeeb",
        "Hacker"
    };

    int studentScores[NUM_STUDENTS][NUM_SUBJECTS] = {
        {90, 85, 88},
        {78, 92, 80},
        {85, 87, 90}};

    printf("Student Record Analyzer:\n");
    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        float average = calculateAverage(studentScores[i]);
        printf("%s's average score: %.2f\n", studentNames[i], average);
    }

    float highestAverage = 0;
    int highestIndex = -1;

    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        float average = calculateAverage(studentScores[i]);
        if (average > highestAverage)
        {
            highestAverage = average;
            highestIndex = i;
        }
    }

    printf("\nStudent with the highest average score:\n");
    printf("Name: %s\n", studentNames[highestIndex]);
    printf("Average Score: %.2f\n", highestAverage);
    return 0;
}
