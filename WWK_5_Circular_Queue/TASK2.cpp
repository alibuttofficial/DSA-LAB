//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Booking {
//    int customerID;
//    string customerName;
//    int numberOfTickets;
//};
//
//class CircularQueue {
//private:
//    Booking arr[5];
//    int front;
//    int rear;
//    int count;
//
//public:
//    CircularQueue() {
//        front = 0;
//        rear = -1;
//        count = 0;
//    }
//
//    bool isEmpty() {
//        return count == 0;
//    }
//
//    bool isFull() {
//        return count == 5;
//    }
//
//    void enqueue(Booking b) {
//        if (isFull()) {
//            cout << "Queue is full" << endl;
//            return;
//        }
//
//        rear = (rear + 1) % 5;
//        arr[rear] = b;
//        count++;
//
//        cout << "Booking added" << endl;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No bookings available" << endl;
//            return;
//        }
//
//        cout << "Cancelled Booking" << endl;
//        cout << "Customer ID: " << arr[front].customerID << endl;
//        cout << "Name: " << arr[front].customerName << endl;
//        cout << "Tickets: " << arr[front].numberOfTickets << endl;
//
//        front = (front + 1) % 5;
//        count--;
//    }
//
//    void peek() {
//        if (isEmpty()) {
//            cout << "No bookings available" << endl;
//            return;
//        }
//
//        cout << "Next Booking" << endl;
//        cout << "Customer ID: " << arr[front].customerID << endl;
//        cout << "Name: " << arr[front].customerName << endl;
//        cout << "Tickets: " << arr[front].numberOfTickets << endl;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "No bookings available" << endl;
//            return;
//        }
//
//        int index = front;
//
//        for (int i = 0; i < count; i++) {
//            cout << "\nCustomer ID: " << arr[index].customerID << endl;
//            cout << "Name: " << arr[index].customerName << endl;
//            cout << "Tickets: " << arr[index].numberOfTickets << endl;
//
//            index = (index + 1) % 5;
//        }
//    }
//
//    void totalBookings() {
//        cout << "Total bookings: " << count << endl;
//    }
//};
//
//int main() {
//    CircularQueue q;
//    int choice;
//
//    do {
//        cout << "\n1. Book Tickets" << endl;
//        cout << "2. Cancel First Booking" << endl;
//        cout << "3. Display Next Booking" << endl;
//        cout << "4. Display All Bookings" << endl;
//        cout << "5. Show Total Bookings" << endl;
//        cout << "6. Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            Booking b;
//
//            cout << "Enter customer ID: ";
//            cin >> b.customerID;
//
//            cout << "Enter customer name: ";
//            cin >> b.customerName;
//
//            cout << "Enter number of tickets: ";
//            cin >> b.numberOfTickets;
//
//            q.enqueue(b);
//        }
//        else if (choice == 2) {
//            q.dequeue();
//        }
//        else if (choice == 3) {
//            q.peek();
//        }
//        else if (choice == 4) {
//            q.display();
//        }
//        else if (choice == 5) {
//            q.totalBookings();
//        }
//        else if (choice == 6) {
//            cout << "Program ended" << endl;
//        }
//        else {
//            cout << "Invalid choice" << endl;
//        }
//
//    } while (choice != 6);
//
//    return 0;
//}