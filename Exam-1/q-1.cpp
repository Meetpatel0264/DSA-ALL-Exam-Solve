#include <iostream>

using namespace std;

int main(){

    int grade, marks;

    cout << "Enter Your Marks : " ;
    cin >> marks;

    if ((marks > 100) || (marks < 0)){
        cout << "Enter Valid Marks";

        return 0;
    }

    // Ternary Operator 

    (marks >= 90) ? cout << "Your Grade Is A - " << endl:
    (marks >= 80) ? cout << "Your Grade Is B - " << endl:
    (marks >= 70) ? cout << "Your Grade Is C - " << endl:
    (marks >= 60) ? cout << "Your Grade Is D - " << endl:
    (marks >= 50) ? cout << "Your Grade Is E - " << endl:
    cout << "Your Grade Is F (Fail)" << endl;

    // Allocating & Switch Grade 
    
    // Allocating

    if (marks >= 90){
        grade = 'A';
    }
    else if (marks >= 80){
        grade = 'B';
    }
    else if (marks >= 70){
        grade = 'C';
    }
    else if (marks >= 60){
        grade = 'D';
    }
    else if (marks >= 50){
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Switch Case Statement

    switch (grade){
    case 'A':
        cout << "Excellent Work" << endl;
        break;
    case 'B':
        cout << "Well Done" << endl;
        break;
    case 'C':
        cout << "Good Job" << endl;
        break;
    case 'D':
        cout << "You Passed" << endl;
        break;
    case 'E':
        cout << "Pass, But You Could Do Better" << endl;
        break;
    case 'F':
        cout << "Sorry, You Failed" << endl;
        break;
    
    default:
        cout << "Invalid Grade" << endl; 
        break;
    }

    // Eligibility Check

    if (grade == 'F'){
        cout << "Please Try Again Next Time" << endl;
    } else {
        cout << "Congratulations ! You Are Eligible For Next Level" << endl;
    }


    return 0;
}