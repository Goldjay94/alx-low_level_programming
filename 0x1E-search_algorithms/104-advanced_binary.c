#include "search_algos.h"
#include <stdio.h>

int binary_search(int arr[], int low, int high, int x);

int advanced_binary(int arr[], int size, int x) {
    if (arr == NULL) {
        return -1;
    }
    int index = binary_search(arr, 0, size - 1, x);
    if (index == -1) {
        return -1;
    }
    // Check if the value appears more than once
    int i = index;
    while (arr[i] == x) {
        i--;
    }
    return i + 1;
}

int binary_search(int arr[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    printf("Searching in subarray: ");
    for (int i = low; i <= high; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (arr[mid] == x) {
        return mid;
    }
    else if (arr[mid] > x) {
        return binary_search(arr, low, mid - 1, x);
    }
    else {
        return binary_search(arr, mid + 1, high, x);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int result = advanced_binary(arr, size, x);
    (result == -1) ? printf("Element is not present in array\n")
                   : printf("Element is present at index %d\n", result);
    return 0;
}

