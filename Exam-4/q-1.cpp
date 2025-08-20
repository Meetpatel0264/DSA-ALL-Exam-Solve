#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++) {
        cout << "Enter value : ";
        cin >> arr[i];
    }

    int Count1 = 0;  // odd count
    int Count2 = 0;  // even count

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            Count2++;
        }
        else {
            Count1++;
        }
    }

    int odd[Count1];
    int even[Count2];

    int idx1 = 0;  // odd index
    int idx2 = 0;  // even index

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even[idx2] = arr[i];  // fixed
            idx2++;
        }
        else {
            odd[idx1] = arr[i];   // fixed
            idx1++;
        }
    }

    cout << endl;

    cout << "Odd numbers are : " << endl;
    for(int i = 0; i < Count1; i++) {
        cout << odd[i] << " ";
    }

    cout << endl;

    cout << "Even numbers are : " << endl;
    for(int i = 0; i < Count2; i++) {
        cout << even[i] << " ";
    }

    return 0;
}
