#include <stdio.h>

int main()
{
    char string[25], reverse_string[25] = {'\0'};
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);

    // Loop to increase the length
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    // Loop to find the reverse of a string
    for (i = length - 1; i >= 0; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }

    // Taking two values `Flag` and `i` in this for loop to compare reverse string index with original
    for (flag = 1, i = 0; i < length; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);

    return 0;
}