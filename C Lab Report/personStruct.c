#include <stdio.h>
#include <string.h>

int main()
{
    struct person
    {
        char name[30];
        int age;
    };

    struct person person;
    char name[30];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    strcpy(person.name, name);
    person.age = age;

    printf("\n--- Driving Licence ---\n");
    printf("\nPerson Name: %s\n", person.name);
    printf("Person Age: %d\n", person.age);

    if (person.age >= 18)
        printf("Your are eligible for driving licence\n");
    else
        printf("Your are not eligible for driving licence\n");
    return 0;
}

