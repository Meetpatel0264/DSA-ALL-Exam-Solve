#include <iostream>

using namespace std;

int main(){

    int firstDigit = 0, lastDigit = 0, n;

    cout << "Enter The Number : ";
    cin >> n;

    lastDigit = n % 10;

    while(n != 0){
        firstDigit = n % 10;
        n = n / 10;
    }

    cout << "First & Last Digit Sum = " << firstDigit + lastDigit;

    return 0;
}