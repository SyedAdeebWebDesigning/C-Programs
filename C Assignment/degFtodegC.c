#include <stdio.h>
// (fahrenheit - 32) * 5 / 9

int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in celsius is: %.2f\n", celsius);
    return 0;
}