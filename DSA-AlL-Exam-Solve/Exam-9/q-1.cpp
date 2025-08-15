#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int count;
    int size;

public:
    Stack(int size)
    {
        this->arr = new int[size];
        this->top = -1;
        this->count = 0;
        this->size = size;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void Push(int data)
    {
        if (this->top == this->size - 1)
        {
            cout << "\n-------------------------------\n";
            cout << "Stack is Full..." << endl;
            cout << "-------------------------------\n\n";
            return;
        }
        this->arr[++top] = data;
        this->count++;
        cout << "\n-------------------------------\n";
        cout << "Data Added successfully..." << endl;
        cout << "-------------------------------\n\n";
    }

    void Pop()
    {
        if (this->count == 0)
        {
            cout << "\n-------------------------------\n";
            cout << "Stack is Empty..." << endl;
            cout << "-------------------------------\n\n";
            return;
        }
        cout << "Popped: " << arr[top] << endl;
        this->top--;
        this->count--;
    }

    void Display()
    {
        if (this->count == 0)
        {
            cout << "\n-------------------------------\n";
            cout << "Stack is Empty..." << endl;
            cout << "-------------------------------\n\n";
            return;
        }
        cout << "\n-------------------------------\n";
        for (int i = this->top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        cout << "-------------------------------\n\n";
    }

    void isEmpty()
    {
        if (this->count == 0)
        {
            cout << "\n-------------------------------\n";
            cout << "Stack is Empty..." << endl;
            cout << "-------------------------------\n\n";
        }
        else
        {
            cout << "\n-------------------------------\n";
            cout << "No, Stack is not Empty..." << endl;
            cout << "-------------------------------\n\n";
        }
    }

    void isFull()
    {
        if (this->size == this->count)
        {
            cout << "\n-------------------------------\n";
            cout << "Stack is Full..." << endl;
            cout << "-------------------------------\n\n";
        }
        else
        {
            cout << "\n-------------------------------\n";
            cout << "No, Stack is not Full..." << endl;
            cout << "-------------------------------\n\n";
        }
    }

    void SecondLargeData()
    {
        if (this->count < 2)
        {
            cout << "\n-------------------------------\n";
            cout << "Not enough elements to find second largest..." << endl;
            cout << "-------------------------------\n\n";
            return;
        }

        int largest = arr[0];
        int secondLargest = arr[0];

        for (int i = 0; i <= top; i++)
        {
            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] != largest)
            {
                secondLargest = arr[i];
            }
        }

        if (largest == secondLargest)
        {
            cout << "\n-------------------------------\n";
            cout << "All elements are the same. No second largest found." << endl;
            cout << "-------------------------------\n\n";
        }
        else
        {
            cout << "\n-------------------------------\n";
            cout << "Second Largest Element: " << secondLargest << endl;
            cout << "-------------------------------\n\n";
        }
    }
};

int main()
{
    int size, choice;
    cout << "Enter The Stack Size : ";
    cin >> size;

    Stack s(size);

    do
    {
        cout << "\n=================================================\n";
        cout << "Press 1. For Push The Element" << endl;
        cout << "Press 2. For Pop The Element" << endl;
        cout << "Press 3. For Display The Elements" << endl;
        cout << "Press 4. For Check The Stack is Empty" << endl;
        cout << "Press 5. For Check The Stack is Full" << endl;
        cout << "Press 6. For Second Large Element" << endl;
        cout << "Press 0. For Exit" << endl;
        cout << "=================================================\n\n";

        cout << "Enter the Your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter the data : ";
            cin >> data;
            s.Push(data);
            break;
        }
        case 2:
            s.Pop();
            break;
        case 3:
            s.Display();
            break;
        case 4:
            s.isEmpty();
            break;
        case 5:
            s.isFull();
            break;
        case 6:
            s.SecondLargeData();
            break;
        case 0:
            cout << "\n-------------------------------\n";
            cout << "Thank You for Using Stack..." << endl;
            cout << "-------------------------------\n\n";
            break;
        default:
            cout << "\nInvalid Choice...\n";
        }
    } while (choice != 0);

    return 0;
}