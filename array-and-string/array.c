#include <stdio.h>

void modifyArr(int *arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] *= 2;
    }
}

void preventArrModification(const int *arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
//        arr[i] *= 2; uncomment will give error compilation time
    }
}

void printArr(int arr[], int arrLength) {
    printf("{");
    for (int i = 0; i < arrLength; i++) {
        if (i == arrLength - 1) {
            printf("%d", arr[i]);
        } else {
            printf("%d,", arr[i]);
        }
    }
    printf("}\n");
}

void printTwoDimensionArrMethod1(int *arr, int dimension1Length, int dimension2Length) {
    printf("{");
    for (int i = 0; i < dimension1Length; i++) {
        printf("{");
        for (int j = 0; j < dimension2Length; j++) {
            if (j == dimension2Length - 1) {
                printf("%d", (arr + i * dimension2Length)[j]);
            } else {
                printf("%d,", (arr + i * dimension2Length)[j]);
            }
        }
        printf("}");
        if (i < dimension1Length - 1) {
            printf(",");
        }
    }
    printf("}\n");
}

void printTwoDimensionArrMethod2(int dimension1Length, int dimension2Length, int arr[][dimension2Length]) {
    printf("{");
    for (int i = 0; i < dimension1Length; i++) {
        printf("{");
        for (int j = 0; j < dimension2Length; j++) {
            if (j == dimension2Length - 1) {
                printf("%d", arr[i][j]);
            } else {
                printf("%d,", arr[i][j]);
            }
        }
        printf("}");
        if (i < dimension1Length - 1) {
            printf(",");
        }
    }
    printf("}\n");
}

void comparePointerAndArrayDeclaration() {
    int arr1[10] = {1, 2, 3, 4, 5};
    int *arr2 = arr1;
    // Difference 1
    // size of array var declaration = size of all members
    printf("Size of array declaration: %llu\n", sizeof(arr1));
    // size of pointer var declaration = size of pointer (8 bytes for 64-bit, 4 bytes for 32-bit system
    printf("Size of pointer declaration: %llu\n", sizeof(arr2));
    // Difference 2
    // address of array var declaration = address of the first member
    printf("Address of array declaration: %p\n", &arr1);
    // address of pointer var declaration = address of the pointer
    printf("Address of pointer declaration: %p\n", &arr2);
    // char array can be modified
    char string1[] = "abc";
    printf("String 1 before modified: %s\n", string1);
    string1[0] = 'd';
    printf("String 1 after modified: %s\n", string1);
    // char pointer can be modified
    char *string2 = "def";
    printf("String 2 before modified: %s\n", string2);

//    string2[0] = 'g'; // uncomment this will give error runtime
//    printf("String 2 after modified: %s\n", string2);

//    arr1 = arr2; // can't do this but arr2 = arr1 is correct

}

void demoArray() {
    printf("---Array Demo---\n");
    int arr1[10] = {1, 2, 3, 4, 5};
    printf("Address of array is address of the first element: %p = %p = %p\n", arr1, &arr1, &arr1[0]);
    int arr1Length = sizeof(arr1) / sizeof(int);
    printArr(arr1, arr1Length);
    int arr2[] = {6, 7, 8, 9, 10};
    int arr2Length = sizeof(arr2) / sizeof(int);
    printArr(arr2, arr2Length);
    modifyArr(arr2, arr2Length);
    printArr(arr2, arr2Length);
    preventArrModification(arr1, arr1Length);
    int arr3[][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    // int arr3[]; It's not allowed to declare an unknown size array without initialization
    printTwoDimensionArrMethod1((int *) arr3, 3, 3);
    printTwoDimensionArrMethod2(3, 3, arr3);
    comparePointerAndArrayDeclaration();
    printf("---End---\n\n");
}
