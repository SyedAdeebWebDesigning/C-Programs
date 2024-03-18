#include <stdio.h> // Include standard input/output library
#include <stdlib.h> // Include standard library for memory allocation

#define STACK_SIZE 100 // Define the maximum size of the stack

void push(int stack[], int* top, int n, int x) {
    // If the stack is full, print an error message and return
    if (*top >= n-1) {
        printf("Stack is overflowed\n");
        return;
    }

    // Otherwise, add the element to the stack and increment the top
    stack[++(*top)] = x;
}

void pop(int stack[], int* top) {
    // If the stack is empty, print an error message and return
    if (*top <= -1) {
        printf("Stack is underflowed\n");
        return;
    }

    // Otherwise, remove the top element from the stack and print it
    printf("The popped element is %d\n", stack[(*top)--]);
}

void display(int stack[], int top) {
    // If the stack is not empty, print all the elements from top to bottom
    if (top >= 0) {
        printf("The elements in the stack are:\n\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
        printf("\nPress next choice\n");
    } else {
        printf("Stack is empty\n");
    }
}

int main() {
    int stack[STACK_SIZE], choice, n, top = -1, x;

    // Ask the user to input the size of the stack
    printf("Enter the size of the stack: ");
    scanf("%d", &n);

    // If the size is larger than the defined maximum size, print an error message and exit the program
    if (n > STACK_SIZE) {
        printf("Stack size should be less than or equal to %d\n", STACK_SIZE);
        return 1;
    }

    // Otherwise, enter a loop where the user can choose to push, pop, display, or exit
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // If the user chooses to push, ask for the value to be pushed
                printf("Enter the value to be pushed: ");
                scanf("%d", &x);
                push(stack, &top, n, x);
                break;
            case 2:
                // If the user chooses to pop, remove the top element from the stack and print it
                pop(stack, &top);
                break;
            case 3:
                // If the user chooses to display, print all the elements in the stack
                display(stack, top);
                break;
            case 4:
                // If the user chooses to exit, end the program
                return 0;
            default:
                // If the user chooses an invalid option, print an error message
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}