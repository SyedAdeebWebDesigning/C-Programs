#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    // Generate test cases
    // Test case 1
    int n1 = 5;
    int expectedResult1 = 120;
    int result1 = factorial(n1);
    printf("factorial(%d) = %d\n", n1, result1);
    printf("Expected: %d\n", expectedResult1);
    printf("Result: %d\n", result1);
    printf("%s\n", result1 == expectedResult1 ? "Test passed" : "Test failed");
    // Test case 2
    int n2 = 0;
    int expectedResult2 = 1;
    int result2 = factorial(n2);
    printf("factorial(%d) = %d\n", n2, result2);
    printf("Expected: %d\n", expectedResult2);
    printf("Result: %d\n", result2);
    printf("%s\n", result2 == expectedResult2 ? "Test passed" : "Test failed");
    // Test case 3
    int n3 = 10;
    int expectedResult3 = 3628800;
    int result3 = factorial(n3);
    printf("factorial(%d) = %d\n", n3, result3);
    printf("Expected: %d\n", expectedResult3);
    printf("Result: %d\n ", result3 == expectedResult3 ? "Test passed" : "Test failed");
    printf("\n%s\n", result3 == expectedResult3 ? "All test cases passed" : "Some test cases failed");

    return 0;
}