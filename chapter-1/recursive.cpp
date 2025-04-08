#include <iostream>
using namespace std;

// Recursive binary search using pointer arithmetic
int recursiveBinarySearch(int* arr, int* left, int* right, int target) {
    if (left > right) {
        return -1;
    }
    int* mid = left + (right - left) / 2;

    if (*mid == target) {
        return mid - arr;  
    } 
    else if (*mid < target) {
        return recursiveBinarySearch(arr, mid + 1, right, target);
    } 
    else {
        return recursiveBinarySearch(arr, left, mid - 1, target);
    }
}

int binarySearch(int* arr, int size, int target) {
    return recursiveBinarySearch(arr, arr, arr + size - 1, target);
}

int main() {
    int arr[] = {72, 99, 55, 77, 76, 88, 38, 88};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}