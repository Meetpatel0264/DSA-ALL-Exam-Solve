#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the value of row and col : ";
    cin >> row >> col;

    if (row <= 0 || col <= 0) {
        cout << "Invalid row or column size!";
        return 0;
    }

    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int row_num, col_num, sum = 0;

    cout << "\nEnter row number choice for sum : ";
    cin >> row_num;

    if (row_num >= 0 && row_num < row) {
        for (int i = 0; i < col; i++) {
            cout << arr[row_num][i] << " ";
            sum += arr[row_num][i];
        }
        cout << "\nSum of row " << row_num << " : " << sum << endl;
    } else {
        cout << "Invalid row number!" << endl;
    }

    sum = 0;

    cout << "\nEnter col number choice for sum : ";
    cin >> col_num;

    if (col_num >= 0 && col_num < col) {
        for (int i = 0; i < row; i++) {
            cout << arr[i][col_num] << " ";
            sum += arr[i][col_num];
        }
        cout << "\nSum of col " << col_num << " : " << sum << endl;
    } else {
        cout << "Invalid column number!" << endl;
    }

    sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }
    cout << "\nTotal sum of all elements in matrix : " << sum << endl;

    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
