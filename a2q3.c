#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target, int *searchCount) {
    if (low > high) {
        return -1; // Element not found
    }

    int mid = (low + high) / 2;
    (*searchCount)++; // Increment search count

    if (arr[mid] == target) {
        return mid; // Element found at position 'mid'
    } else if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, high, target, searchCount);
    } else {
        return binarySearch(arr, low, mid - 1, target, searchCount);
    }
}

int main() {
    int arr[] = {8, 12, 15, 26, 30, 37, 42, 50, 56, 62, 76, 82, 84, 88, 92, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, searchCount = 0;

    printf("Enter the value to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, size - 1, target, &searchCount);

    if (result != -1) {
        printf("Element %d found at position %d.\n", target, result);
    } else {
        printf("Element %d not found.\n", target);
    }

    printf("Number of elements searched: %d\n", searchCount);

    return 0;
}
