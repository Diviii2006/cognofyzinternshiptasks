#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    sort(arr, arr + size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

