//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class PrinterQueue {
//private:
//    string documents[100];
//    int frontIndex;
//    int rear;
//
//public:
//    PrinterQueue() {
//        frontIndex = 0;
//        rear = -1;
//    }
//
//    bool isEmpty() {
//        return frontIndex > rear;
//    }
//
//    void enqueue(string document) {
//        if (rear == 99) {
//            cout << "Printing Queue is Full!" << endl;
//        }
//        else {
//            documents[++rear] = document;
//            cout << "Document Added Successfully!" << endl;
//        }
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No Documents to Print!" << endl;
//        }
//        else {
//            cout << "Printing Document: " << documents[frontIndex] << endl;
//            frontIndex++;
//            cout << "Document Printed Successfully!" << endl;
//        }
//    }
//
//    void front() {
//        if (isEmpty()) {
//            cout << "No Documents in Queue!" << endl;
//        }
//        else {
//            cout << "Next Document to Print: " << documents[frontIndex] << endl;
//        }
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Printing Queue is Empty!" << endl;
//        }
//        else {
//            cout << "Documents Waiting for Printing:" << endl;
//
//            for (int i = frontIndex; i <= rear; i++) {
//                cout << documents[i] << endl;
//            }
//        }
//    }
//};
//
//int main() {
//    PrinterQueue q;
//    int choice;
//    string document;
//
//    do {
//        cout << "\n===== DOCUMENT PRINTING SYSTEM =====";
//        cout << "\n1. Add Document";
//        cout << "\n2. Print Document";
//        cout << "\n3. View Next Document";
//        cout << "\n4. Display All Documents";
//        cout << "\n5. Exit";
//
//        cout << "\nEnter Your Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Document Name: ";
//            cin >> document;
//            q.enqueue(document);
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
