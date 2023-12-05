#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char string1[30] = "Hello";
    char string2[20] = "World";
    // concatenation
    char concatenation[30];
    strcpy(concatenation, string1);
    strcat(concatenation, string2);
    printf("%s\n", concatenation);
    // reverse
    char myString[] = "Hello World";
    reverseString(myString);
    printf("%s\n", myString);
    // string matching
    char match1[30] = "Syed";
    char match2[30] = "Adeeb";
    printf("%d\n", strcmp(match1, match2));
    return 0;
}