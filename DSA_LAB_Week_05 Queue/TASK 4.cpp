//
//#include <iostream>
//using namespace std;
//
//class TicketQueue {
//private:
//    int tickets[100];
//    int frontIndex;
//    int rear;
//
//public:
//    TicketQueue() {
//        frontIndex = 0;
//        rear = -1;
//    }
//
//    void enqueue(int id) {
//        if (rear == 99) {
//            cout << "Ticket Queue is Full!" << endl;
//        }
//        else if (id < 1000 || id > 9999) {
//            cout << "Invalid Ticket ID! Enter a 4-digit ID." << endl;
//        }
//        else {
//            bool duplicate = false;
//
//            for (int i = frontIndex; i <= rear; i++) {
//                if (tickets[i] == id) {
//                    duplicate = true;
//                    break;
//                }
//            }
//
//            if (duplicate) {
//                cout << "Ticket ID Already Exists!" << endl;
//            }
//            else {
//                tickets[++rear] = id;
//                cout << "Ticket Added Successfully!" << endl;
//            }
//        }
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No Tickets to Resolve!" << endl;
//        }
//        else {
//            cout << "Ticket " << tickets[frontIndex]
//                << " Resolved Successfully!" << endl;
//            frontIndex++;
//        }
//    }
//
//    void front() {
//        if (isEmpty()) {
//            cout << "No Pending Tickets!" << endl;
//        }
//        else {
//            cout << "Next Ticket to Resolve: "
//                << tickets[frontIndex] << endl;
//        }
//    }
//
//    bool isEmpty() {
//        return frontIndex > rear;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "No Pending Tickets!" << endl;
//        }
//        else {
//            cout << "Pending Tickets: ";
//
//            for (int i = frontIndex; i <= rear; i++) {
//                cout << tickets[i] << " ";
//            }
//
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    TicketQueue q;
//    int choice, id;
//
//    do {
//        cout << "\n===== CUSTOMER SUPPORT SYSTEM =====";
//        cout << "\n1. Add New Ticket";
//        cout << "\n2. Resolve Ticket";
//        cout << "\n3. View Next Ticket";
//        cout << "\n4. Display All Pending Tickets";
//        cout << "\n5. Exit";
//
//        cout << "\nEnter Your Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter 4-Digit Ticket ID: ";
//            cin >> id;
//            q.enqueue(id);
//            break;
//
//        case 2:
//            q.dequeue();
//            break;
//
//        case 3:
//            q.front();
//            break;
//
//        case 4:
//            q.display();
//            break;
//
//        case 5:
//            cout << "Program Exited!" << endl;
//            break;
//
//        default:
//            cout << "Invalid Choice!" << endl;
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}
