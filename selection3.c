#include <stdio.h>

int main() {
    int arr[5];
    int i, j, min_index, temp;

    // Input 5 integers from the user
    printf("Enter five integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort algorithm
    for (i = 0; i < 5 - 1; i++) {
        // Find the index of the minimum element in the remaining unsorted array
        min_index = i;
        for (j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
