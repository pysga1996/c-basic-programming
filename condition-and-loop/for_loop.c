#include <stdio.h>

void sum(const int arr[], int length) {
    int sum = 0;
    printf("Array length is: %d\n", length);
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    printf("Sum of all element in the given array-and-string is: %d\n", sum);
}

void forLoopDemo() {
    printf("#For loop:\n");
    int arr[] = {1, 2, 3, 4, 5};
    sum(arr, sizeof(arr) / sizeof(int));
    printf("\n");
}
