#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of an array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }

    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "\nMaximum number in array: " << maximum << endl;
    cout << "Minimum number in array: " << minimum << endl;

    return 0;
}
