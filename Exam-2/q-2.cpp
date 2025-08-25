#include <iostream>
using namespace std;

int main() {
    int sum = 0, num, rem;

    cout << "Enter Any Number : ";
    cin >> num;

    while (num > 0) {
        rem = num % 10;   // get last digit
        sum = sum + rem;  // add to sum
        num = num / 10;   // remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
