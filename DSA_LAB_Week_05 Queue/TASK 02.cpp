//
//#include <iostream>
//using namespace std;
//
//class Queue {
//private:
//    int* stack1;
//    int* stack2;
//    int size;
//    int top1;
//    int top2;
//
//    void transfer() {
//        while (top1 != -1) {
//            stack2[++top2] = stack1[top1--];
//        }
//    }
//
//public:
//    Queue(int s) {
//        size = s;
//        stack1 = new int[size];
//        stack2 = new int[size];
//        top1 = -1;
//        top2 = -1;
//    }
//
//    void enqueue(int value) {
//        if (top1 + top2 + 2 == size) {
//            cout << "Queue is Full!" << endl;
//        }
//        else {
//            stack1[++top1] = value;
//            cout << "Element Inserted Successfully" << endl;
//        }
//    }
//
//    int dequeue() {
//        if (top2 == -1) {
//            transfer();
//        }
//
//        if (top2 == -1) {
//            return -1;
//        }
//
//        return stack2[top2--];
//    }
//
//    int front() {
//        if (top2 == -1) {
//            transfer();
//        }
//
//        if (top2 == -1) {
//            return -1;
//        }
//
//        return stack2[top2];
//    }
//
//    bool isEmpty() {
//        return top1 == -1 && top2 == -1;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//        }
//        else {
//            cout << "Queue Elements: ";
//
//            for (int i = top2; i >= 0; i--) {
//                cout << stack2[i] << " ";
//            }
//
//            for (int i = 0; i <= top1; i++) {
//                cout << stack1[i] << " ";
//            }
//
//            cout << endl;
//        }
//    }
//
//    ~Queue() {
//        delete[] stack1;
//        delete[] stack2;
//    }
//};
//
//int main() {
//    int capacity;
//    cout << "Enter Queue Size: ";
//    cin >> capacity;
//
//    if (capacity <= 0) {
//        cout << "Invalid Queue Size!" << endl;
//        return 0;
//    }
//
//    Queue q(capacity);
//
//    int choice, value;
//
//    do {
//        cout << "\n1. Enqueue";
//        cout << "\n2. Dequeue";
//        cout << "\n3. Front Element";
//        cout << "\n4. Display Elements";
//        cout << "\n5. Exit";
//        cout << "\nEnter Your Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Value: ";
//            cin >> value;
//            q.enqueue(value);
//            break;
//
//        case 2:
//            if (!q.isEmpty())
//                cout << "Dequeued Element: " << q.dequeue() << endl;
//            else
//                cout << "Queue is Empty!" << endl;
//            break;
//
//        case 3:
//            if (!q.isEmpty())
//                cout << "Front Element: " << q.front() << endl;
//            else
//                cout << "Queue is Empty!" << endl;
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
