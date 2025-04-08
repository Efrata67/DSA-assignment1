#include <iostream>

using namespace std;

// Function to print an array of pointers (for debugging)
void printPointers(int* arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << *arr[i] << " "; // Dereference the pointers to print the values
    }
    cout << endl;
}

// Basic swap for integers. This function takes two integer addresses
// and swaps what are found at that address.
void swap (int* a, int* b) {
    int temp = *a; //store the value pointed to by pointer a
    *a = *b;      //assign the value pointed to by pointer b to the variable at address a
    *b = temp;    //assign the temporary store at int temp to where pointer b points to
}

int main() {
    // Example Data (using a raw array)
    int data[] = {5, 2, 8, 1, 9, 4, 7, 3, 6, 0};
    int n = sizeof(data) / sizeof(data[0]); // Calculate the size of the array

    // Array of pointers to the data
    int* pointers[n]; // C-style array of pointers
    for (int i = 0; i < n; i++) {
        pointers[i] = &data[i]; // Initialize pointers to point to elements in data
    }

    // Print original array for demonstration
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Array of pointers array: ";
    printPointers(pointers, n);


    return 0;
}