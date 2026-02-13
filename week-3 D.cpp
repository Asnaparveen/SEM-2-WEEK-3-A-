#include <stdio.h>

int main() {
    int arr[] = {5,10,15,20,25};
    int index;
    int *ptr = arr;

    printf("Enter index: ");
    scanf("%d", &index);

    printf("Element at index %d is %d", index, *(ptr + index));

    return 0;
}

