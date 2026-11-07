
#include <iostream>
#include "myQueue.h"
using namespace std;

int main() {
    int capacity;
    cout << "Enter Queue Size: ";
    cin >> capacity;

    if (capacity <= 0) {
        cout << "Invalid Queue Size!" << endl;
        return 0;
    }

    myQueue<int> q(capacity);

    int choice, value;

    do {
        cout << "\n1. EnQueue";
        cout << "\n2. DeQueue";
        cout << "\n3. Front";
        cout << "\n4. Check Empty";
        cout << "\n5. Check Full";
        cout << "\n6. Display Queue";
        cout << "\n7. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Value: ";
            cin >> value;
            q.enQueue(value);
            break;

        case 2:
            if (!q.isEmpty())
                cout << "Removed Element: " << q.deQueue() << endl;
            else
                cout << "Queue is Empty!" << endl;
            break;

        case 3:
            if (!q.isEmpty())
                cout << "Front Element: " << q.front() << endl;
            else
                cout << "Queue is Empty!" << endl;
            break;

        case 4:
            if (q.isEmpty())
                cout << "Queue is Empty" << endl;
            else
                cout << "Queue is Not Empty" << endl;
            break;

        case 5:
            if (q.isFull())
                cout << "Queue is Full" << endl;
            else
                cout << "Queue is Not Full" << endl;
            break;

        case 6:
            q.display();
            break;

        case 7:
            cout << "Program Exited!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}
