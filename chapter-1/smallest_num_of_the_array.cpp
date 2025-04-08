#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int smallest = arr[0]; // Assume first element is smallest number of the array
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update to check if a smaller element is found
        }
    }
    return smallest;
}

int main() {
    int arr[] = {7, 10, 8, 20, 15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Smallest number: " << findSmallest(arr, size) << endl;
    
    return 0;
}