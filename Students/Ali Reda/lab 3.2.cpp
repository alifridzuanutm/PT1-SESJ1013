#include <iostream>
using namespace std;

int findSmallestIndex(int arr[], int size) {
    if (size == 0) {
        return -1;
    }

    int smallestIndex = 0;
    int smallestElement = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallestElement) {
            smallestElement = arr[i];
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

int main() {
    int arr[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSmallestIndex(arr, size);
    cout << "The index of the smallest element is: " << result << endl;

    return 0;
}
