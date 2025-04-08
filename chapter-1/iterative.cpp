#include <iostream>
using namespace std;

// Pointer-based iterative binary search
int binarySearch(int* arr, int size, int target) {
    int* left = arr;  
    int* right = arr + size - 1;   

    while (left <= right) {
        int* mid = left + (right - left) / 2;
        
        if (*mid == target) {
            return mid - arr;
        } 
        else if (*mid < target) {
            left = mid + 1; 
        } 
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
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