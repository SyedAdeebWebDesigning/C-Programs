#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate str2 to str1 using strcat function
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
