/**
 * This C program implements a dynamic array.
 * A dynamic array is an array that can change in size,
 * allowing for more elements to be added or removed as needed.
 *
 * Accuracy up to 1,000,000 places.
 * Time complexity: O(n)
 * Space complexity: O(n)
 * Author: Syed Adeeb
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Define the structure for the dynamic array
typedef struct
{
    int *array;            // Pointer to the array of integers
    int size;              // Current number of elements in the array
    int capacity;          // Current capacity of the array
    pthread_mutex_t mutex; // Mutex for thread safety
} DynamicArray;

// Function to create a new dynamic array
DynamicArray *createDynamicArray()
{
    // Allocate memory for the dynamic array structure
    DynamicArray *arr = malloc(sizeof(DynamicArray));
    if (!arr)
    {
        fprintf(stderr, "Failed to allocate memory for dynamic array structure.\n");
        exit(EXIT_FAILURE);
    }
    // Initialize the array, size, and capacity
    arr->array = NULL;
    arr->size = 0;
    arr->capacity = 0;
    // Initialize the mutex
    pthread_mutex_init(&arr->mutex, NULL);
    return arr;
}

// Function to add an element to the dynamic array
void addToDynamicArray(DynamicArray *arr, int element)
{
    // Lock the mutex before modifying the array
    pthread_mutex_lock(&arr->mutex);
    // If the array is full, double its capacity
    if (arr->size >= arr->capacity)
    {
        int new_capacity = arr->capacity == 0 ? 1 : arr->capacity * 2;
        int *new_array = realloc(arr->array, new_capacity * sizeof(int));
        if (!new_array)
        {
            fprintf(stderr, "Failed to allocate memory for dynamic array.\n");
            pthread_mutex_unlock(&arr->mutex);
            return;
        }
        arr->array = new_array;
        arr->capacity = new_capacity;
    }
    // Add the new element to the array
    arr->array[arr->size++] = element;
    // Unlock the mutex
    pthread_mutex_unlock(&arr->mutex);
}

// Function to remove an element from the dynamic array at a given index
void removeFromDynamicArray(DynamicArray *arr, int index)
{
    // Lock the mutex before modifying the array
    pthread_mutex_lock(&arr->mutex);
    // Check if the index is valid
    if (index < 0 || index >= arr->size)
    {
        fprintf(stderr, "Index out of bounds.\n");
        pthread_mutex_unlock(&arr->mutex);
        return;
    }
    // Shift elements to the left to fill the gap
    for (int i = index; i < arr->size - 1; i++)
    {
        arr->array[i] = arr->array[i + 1];
    }
    arr->size--;
    // If the size is less than a quarter of the capacity, halve the capacity
    if (arr->size < arr->capacity / 4)
    {
        int new_capacity = arr->capacity / 2;
        int *new_array = realloc(arr->array, new_capacity * sizeof(int));
        if (!new_array)
        {
            fprintf(stderr, "Failed to allocate memory for dynamic array.\n");
            pthread_mutex_unlock(&arr->mutex);
            return;
        }
        arr->array = new_array;
        arr->capacity = new_capacity;
    }
    // Unlock the mutex
    pthread_mutex_unlock(&arr->mutex);
}

// Function to free the memory used by the dynamic array
void freeDynamicArray(DynamicArray *arr)
{
    // Destroy the mutex
    pthread_mutex_destroy(&arr->mutex);
    // Free the memory used by the array
    free(arr->array);
    // Free the memory used by the dynamic array structure
    free(arr);
}

// Main function to demonstrate the use of the dynamic array
int main()
{
    // Create a new dynamic array
    DynamicArray *myArray = createDynamicArray();
    // Add some elements to the array
    for (int i = 1; i <= 50; i++)
    {
        addToDynamicArray(myArray, i);
    }
    // Remove an element from the array
    removeFromDynamicArray(myArray, 50);
    // Print the elements of the array
    printf("Dynamic Array: \n");
    for (int i = 0; i < myArray->size; i++)
    {
        printf("%d: %d\n", i, myArray->array[i]);
    }
    printf("\n");
    // Free the memory used by the array
    freeDynamicArray(myArray);
    return 0;
}