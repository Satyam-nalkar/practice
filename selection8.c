#include <stdio.h>

int main() {
    int a[100];
    int i, j, n, temp, min;
    FILE *file;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0 && n > 100) {
        printf("Invalid number of elements. Must be between 1 and 100.\n");
        return 1;
    }
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    file = fopen("sorted_array.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "Sorted array:\n");
    for (i = 0; i < n; i++) {
        fprintf(file, "%d\n", a[i]);
    }
    fclose(file);

    printf("Sorted array has been written to sorted_array.txt\n");

    return 0;
}
