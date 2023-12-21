#include <stdio.h>

int main()
{

    char c;
    // 97-122(ASCII code)
    printf("enter the character\n");
    scanf("%c", &c);
    if (c <= 122 && c >= 197)
    {
        printf("%c  is in lowercase\n", c);
    }
    else
    {
        printf("not lowercase");
    }

    return 0;
}