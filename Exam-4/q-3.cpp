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

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the value: ";
        cin >> arr[i];
    }

    int negCount = 0, posCount = 0, zeroCount = 0;

    cout << "Negative elements are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            negCount++;
        }
    }
    cout << "\nTotal negative numbers: " << negCount << endl;

    cout << "Positive elements are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
            posCount++;
        }
    }
    cout << "\nTotal positive numbers: " << posCount << endl;

    cout << "Zero elements are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            cout << arr[i] << " ";
            zeroCount++;
        }
    }
    cout << "\nTotal zero numbers: " << zeroCount << endl;

    delete[] arr;

    return 0;
}