#include <stdio.h>
#include <string.h>

int main()
{
    char input[50], reverse[50];
    int flag = 0;
    int i;
    printf("Enter a string: ");
    scanf("%s", input);
    for (i = 0; i <= strlen(input); i++)
    {
        reverse[strlen(input) - i - 1] = input[i];
    }
    for (int j = i; j >= 0; j--)
    {
        if (reverse[j] != input[j])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("String is not Palindrome\n");
    else
        printf("String is Palindrome\n");
    return 0;
}