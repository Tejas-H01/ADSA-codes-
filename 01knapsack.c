#include <stdio.h>

// Function declaration
void printArray(int arr[], int size);
int findMax(int arr[], int size);

int main() {
    // Variables and data types
    int number = 42;
    float decimal = 3.14;
    char letter = 'A';

    // Array
    int numbers[5] = {1, 2, 3, 4, 5};
    
    // Printing variables
    printf("Number: %d\n", number);
    printf("Decimal: %.2f\n", decimal);
    printf("Letter: %c\n", letter);

    // For loop
    printf("\nCounting from 1 to 5:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // Array operations
    printf("\n\nArray elements: ");
    printArray(numbers, 5);
    
    // Function call
    int max = findMax(numbers, 5);
    printf("Maximum element: %d\n", max);

    return 0;
}

// Function to print array elements
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find maximum element
int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}