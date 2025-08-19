#include <iostream>

using namespace std;

void calc (int a, int b);

int main(){

    int a, b;

    cout << "Enter The A and B value : ";
    cin >> a >> b;

    calc(a, b);
    
    return 0;
}

void calc (int a, int b){

    int choice;

    do{
        cout << "Press 1 For + " << endl;
        cout << "Press 2 For - " << endl;
        cout << "Press 3 For * " << endl;
        cout << "Press 4 For / " << endl;
        cout << "Press 5 For % " << endl;
        cout << "Press 6 for Palindrome" << endl;
        cout << "Press 0 to Exit this Program " << endl << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;
    
        switch (choice)
        {
        case 1:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a + b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 2:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a - b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 3:{
            cout << "------------------------------------------------" << endl;
            cout << "Result : " << a * b << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 4:{
            cout << "------------------------------------------------" << endl;
            if(b != 0)
                cout << "Result : " << float(a) / float(b) << endl;
            else
                cout << "Error: Division by Zero!" << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 5:{
            cout << "------------------------------------------------" << endl;
            if(b != 0)
                cout << "Result : " << a % b << endl;
            else
                cout << "Error: Modulo by Zero!" << endl;
            cout << "------------------------------------------------" << endl;
        }
        break;
        case 6:{
            cout << "------------------------------------------------" << endl;
            auto isPalindrome = [](int num) {
                int original = num, reversed = 0, rem;
                while(num > 0) {
                    rem = num % 10;
                    reversed = reversed * 10 + rem;
                    num /= 10;
                }
                return original == reversed;
            };

            cout << "Checking Palindrome for A = " << a << endl;
            if(isPalindrome(a)) cout << a << " is a Palindrome Number" << endl;
            else cout << a << " is NOT a Palindrome Number" << endl;

            cout << "Checking Palindrome for B = " << b << endl;
            if(isPalindrome(b)) cout << b << " is a Palindrome Number" << endl;
            else cout << b << " is NOT a Palindrome Number" << endl;

            cout << "------------------------------------------------" << endl;
        }
        break;
        case 0:{
            cout << "------------------------------------------------" << endl;
            cout << "Thank You for using calculator " << endl ;
            cout << "------------------------------------------------" << endl;
        }
        break;
        
        default:{
            cout << "------------------------------------------------" << endl;
            cout << "Please Enter Valid Choice for 1 to 6" << endl;
            cout << "------------------------------------------------" << endl;
        }
            break;
        }

    } while (choice != 0);

}
