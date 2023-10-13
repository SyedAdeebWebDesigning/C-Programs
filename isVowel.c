#include <stdio.h>

int main()
{
    char alphabet;
    printf("Enter any alphabet to check for vowel: ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("Alphabet %c is vowel\n", alphabet);
        break;

    case 'e':
        printf("Alphabet %c is vowel\n", alphabet);
        break;

    case 'i':
        printf("Alphabet %c is vowel\n", alphabet);
        break;

    case 'o':
        printf("Alphabet %c is vowel\n", alphabet);
        break;

    case 'u':
        printf("Alphabet %c is vowel\n", alphabet);
        break;

    default:
        printf("Alphabet %c is not a vowel\n", alphabet);
        break;
    }
    return 0;
}