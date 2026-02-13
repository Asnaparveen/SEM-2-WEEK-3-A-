#include <stdio.h>

#define MAX 25

// Function to display array
void display(int arr[], int size) {
    int i;
    printf("\nArray elements are:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete element at beginning
int deleteBeginning(int arr[], int size) {
    if(size == 0) {
        printf("\nArray is empty.\n");
        return size;
    }
    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

// Function to delete element at end
int deleteEnd(int arr[], int size) {
    if(size == 0) {
        printf("\nArray is empty.\n");
        return size;
    }
    return size - 1;
}

// Function to delete element at middle
int deleteMiddle(int arr[], int size) {
    if(size == 0) {
        printf("\nArray is empty.\n");
        return size;
    }
    int mid = size / 2;
    for(int i = mid; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

// Function to insert element at a particular position
int insertAtPosition(int arr[], int size, int element, int position) {
    if(size >= MAX) {
        printf("\nArray is full.\n");
        return size;
    }
    if(position < 0 || position > size) {
        printf("\nInvalid position.\n");
        return size;
    }
    for(int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    return size + 1;
}

int main() {
    int arr[MAX];
    int size = 0;
    int i;

    // Insert elements of your choice (example values)
    for(i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 5;   // Example: 5,10,15...
        size++;
    }

    printf("Initial array:");
    display(arr, size);

    // Delete from beginning
    size = deleteBeginning(arr, size);
    printf("\nAfter deleting from beginning:");
    display(arr, size);

    // Delete from middle
    size = deleteMiddle(arr, size);
    printf("\nAfter deleting from middle:");
    display(arr, size);

    // Delete from end
    size = deleteEnd(arr, size);
    printf("\nAfter deleting from end:");
    display(arr, size);

    // Insert at particular position
    size = insertAtPosition(arr, size, 99, 2);
    printf("\nAfter inserting 99 at position 2:");
    display(arr, size);

    return 0;
}

