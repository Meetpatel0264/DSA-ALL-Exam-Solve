#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Left side: increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Middle spaces (double spacing for alignment)
        int spaceCount = (rows - i) * 2;
        for (int s = 1; s <= spaceCount; s++) {
            cout << "  ";
        }

        // Right side: decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
