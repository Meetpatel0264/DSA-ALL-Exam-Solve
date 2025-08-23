#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {
        if (i == 1 || i == 4 || i == 7) {
            // Print full row of A's
            for (int j = 1; j <= 6; j++) {
                cout << "A ";
            }
        } else {
            // Print single A
            cout << "A";
        }
        cout << endl;
    }

    return 0;
}