//#include <iostream>
//#include <string>
//using namespace std;
//
//struct PrintJob {
//    int jobID;
//    string userName;
//    int pages;
//};
//
//class CircularQueue {
//private:
//    PrintJob arr[5];
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
//    void enqueue(PrintJob p) {
//        if (isFull()) {
//            cout << "Queue is full" << endl;
//            return;
//        }
//
//        rear = (rear + 1) % 5;
//        arr[rear] = p;
//        count++;
//
//        cout << "Print job added" << endl;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No print jobs available" << endl;
//            return;
//        }
//
//        cout << "Processed Job" << endl;
//        cout << "Job ID: " << arr[front].jobID << endl;
//        cout << "User: " << arr[front].userName << endl;
//        cout << "Pages: " << arr[front].pages << endl;
//
//        front = (front + 1) % 5;
//        count--;
//    }
//
//    void peek() {
//        if (isEmpty()) {
//            cout << "No print jobs available" << endl;
//            return;
//        }
//
//        cout << "Next Print Job" << endl;
//        cout << "Job ID: " << arr[front].jobID << endl;
//        cout << "User: " << arr[front].userName << endl;
//        cout << "Pages: " << arr[front].pages << endl;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "No print jobs available" << endl;
//            return;
//        }
//
//        int index = front;
//
//        for (int i = 0; i < count; i++) {
//            cout << "\nJob ID: " << arr[index].jobID << endl;
//            cout << "User: " << arr[index].userName << endl;
//            cout << "Pages: " << arr[index].pages << endl;
//
//            index = (index + 1) % 5;
//        }
//    }
//
//    void totalJobs() {
//        cout << "Total pending jobs: " << count << endl;
//    }
//};
//
//int main() {
//    CircularQueue q;
//    int choice;
//
//    do {
//        cout << "\n1. Submit Print Job" << endl;
//        cout << "2. Process Print Job" << endl;
//        cout << "3. Display Next Print Job" << endl;
//        cout << "4. Display All Print Jobs" << endl;
//        cout << "5. Show Total Jobs" << endl;
//        cout << "6. Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            PrintJob p;
//
//            cout << "Enter job ID: ";
//            cin >> p.jobID;
//
//            cout << "Enter user name: ";
//            cin >> p.userName;
//
//            cout << "Enter number of pages: ";
//            cin >> p.pages;
//
//            q.enqueue(p);
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
//            q.totalJobs();
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