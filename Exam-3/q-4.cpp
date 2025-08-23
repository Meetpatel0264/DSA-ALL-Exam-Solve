#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // print stars
        for (int j = 1; j <= rows - i; j++) {
            cout << "* ";
        }

        // binary pattern always starts with 1
        int binary = 1;

        for (int j = 1; j <= i; j++) {
            cout << binary << " ";
            binary = 1 - binary;  // alternate between 1 and 0
        }

        cout << endl;
    }

    return 0;
}
