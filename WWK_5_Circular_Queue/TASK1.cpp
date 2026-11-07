#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string transaction;
};

class CircularQueue {
private:
    Customer arr[5];
    int front;
    int rear;
    int count;

public:
    CircularQueue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == 5;
    }

    void enqueue(Customer c) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        rear = (rear + 1) % 5;
        arr[rear] = c;
        count++;

        cout << "Customer added" << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Served Customer: " << arr[front].name << endl;
        cout << "Transaction: " << arr[front].transaction << endl;

        front = (front + 1) % 5;
        count--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        int index = front;

        for (int i = 0; i < count; i++) {
            cout << "Name: " << arr[index].name << endl;
            cout << "Transaction: " << arr[index].transaction << endl;
            index = (index + 1) % 5;
        }
    }

    void totalCustomers() {
        cout << "Total customers: " << count << endl;
    }
};

int main() {
    CircularQueue q;
    int choice;

    do {
        cout << "\n1. Add Customer" << endl;
        cout << "2. Serve Customer" << endl;
        cout << "3. Display Customers" << endl;
        cout << "4. Show Total Customers" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Customer c;

            cout << "Enter name: ";
            cin >> c.name;

            cout << "Enter transaction: ";
            cin >> c.transaction;

            q.enqueue(c);
        }
        else if (choice == 2) {
            q.dequeue();
        }
        else if (choice == 3) {
            q.display();
        }
        else if (choice == 4) {
            q.totalCustomers();
        }
        else if (choice == 5) {
            cout << "Program ended" << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 5);

    return 0;
}
