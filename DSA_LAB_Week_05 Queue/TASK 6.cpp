//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Package {
//public:
//    int packageID;
//    string address;
//    int timeToDeliver;
//};
//
//class DeliveryQueue {
//private:
//    Package packages[100];
//    int frontIndex;
//    int rear;
//
//public:
//    DeliveryQueue() {
//        frontIndex = 0;
//        rear = -1;
//    }
//
//    bool isEmpty() {
//        return frontIndex > rear;
//    }
//
//    void enqueue(int id, string address, int time) {
//        if (rear == 99) {
//            cout << "Delivery Queue is Full!" << endl;
//        }
//        else {
//            packages[++rear].packageID = id;
//            packages[rear].address = address;
//            packages[rear].timeToDeliver = time;
//
//            cout << "Package Added Successfully!" << endl;
//        }
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No Packages Available!" << endl;
//        }
//        else {
//            cout << "Package " << packages[frontIndex].packageID
//                << " Delivered Successfully!" << endl;
//
//            frontIndex++;
//        }
//    }
//
//    void front() {
//        if (isEmpty()) {
//            cout << "No Packages Available!" << endl;
//        }
//        else {
//            cout << "\nNext Package for Delivery:";
//            cout << "\nPackage ID: " << packages[frontIndex].packageID;
//            cout << "\nAddress: " << packages[frontIndex].address;
//            cout << "\nDelivery Time Window: "
//                << packages[frontIndex].timeToDeliver << endl;
//        }
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Delivery Queue is Empty!" << endl;
//        }
//        else {
//            cout << "\nPending Packages:" << endl;
//
//            for (int i = frontIndex; i <= rear; i++) {
//                cout << "\nPackage ID: " << packages[i].packageID;
//                cout << "\nAddress: " << packages[i].address;
//                cout << "\nDelivery Time Window: "
//                    << packages[i].timeToDeliver << endl;
//            }
//        }
//    }
//
//    void checkDeliveryTime(int currentTime) {
//        while (!isEmpty()) {
//            if (packages[frontIndex].timeToDeliver < currentTime) {
//                cout << "\nPackage "
//                    << packages[frontIndex].packageID
//                    << " has expired!" << endl;
//
//                cout << "Package moved to expired log." << endl;
//
//                frontIndex++;
//            }
//            else {
//                cout << "\nPackage "
//                    << packages[frontIndex].packageID
//                    << " is still within its delivery time window."
//                    << endl;
//                break;
//            }
//        }
//
//        if (isEmpty()) {
//            cout << "No Deliverable Packages Remaining!" << endl;
//        }
//    }
//};
//
//int main() {
//    DeliveryQueue q;
//    int choice, id, time, currentTime;
//    string address;
//
//    do {
//        cout << "\n===== PACKAGE DELIVERY SYSTEM =====";
//        cout << "\n1. Add New Package";
//        cout << "\n2. Deliver Package";
//        cout << "\n3. View Next Package";
//        cout << "\n4. Display All Packages";
//        cout << "\n5. Check Delivery Time";
//        cout << "\n6. Exit";
//
//        cout << "\nEnter Your Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Package ID: ";
//            cin >> id;
//
//            cout << "Enter Delivery Address (use underscores instead of spaces): ";
//            cin >> address;
//
//            cout << "Enter Delivery Time Window (24-hour format, e.g. 14 for 2 PM): ";
//            cin >> time;
//
//            if (id < 0 || time < 0 || time > 23) {
//                cout << "Invalid Package ID or Delivery Time!" << endl;
//            }
//            else {
//                q.enqueue(id, address, time);
//            }
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
//            cout << "Enter Current Time (0-23): ";
//            cin >> currentTime;
//
//            if (currentTime < 0 || currentTime > 23) {
//                cout << "Invalid Time!" << endl;
//            }
//            else {
//                q.checkDeliveryTime(currentTime);
//            }
//            break;
//
//        case 6:
//            cout << "Program Exited!" << endl;
//            break;
//
//        default:
//            cout << "Invalid Choice!" << endl;
//        }
//
//    } while (choice != 6);
//
//    return 0;
//}
