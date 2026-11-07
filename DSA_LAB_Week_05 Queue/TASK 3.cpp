//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Queue {
//private:
//    int arr[100];
//    int frontIndex;
//    int rear;
//
//public:
//    Queue() {
//        frontIndex = 0;
//        rear = -1;
//    }
//
//    void enqueue(int value) {
//        if (rear == 99) {
//            cout << "Queue is Full!" << endl;
//        }
//        else {
//            arr[++rear] = value;
//        }
//    }
//
//    int dequeue() {
//        if (isEmpty()) {
//            return -1;
//        }
//        return arr[frontIndex++];
//    }
//
//    int front() {
//        if (isEmpty()) {
//            return -1;
//        }
//        return arr[frontIndex];
//    }
//
//    bool isEmpty() {
//        return frontIndex > rear;
//    }
//
//    void reverseFirstK(int k) {
//        int n = rear - frontIndex + 1;
//
//        if (k <= 1 || n == 0) {
//            return;
//        }
//
//        if (k > n) {
//            k = n;
//        }
//
//        stack<int> s;
//
//        for (int i = 0; i < k; i++) {
//            s.push(dequeue());
//        }
//
//        while (!s.empty()) {
//            enqueue(s.top());
//            s.pop();
//        }
//
//        for (int i = 0; i < n - k; i++) {
//            enqueue(dequeue());
//        }
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//        }
//        else {
//            cout << "Queue Elements: ";
//            for (int i = frontIndex; i <= rear; i++) {
//                cout << arr[i] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    Queue q;
//    int n, value, k;
//
//    cout << "Enter Number of Queue Elements: ";
//    cin >> n;
//
//    if (n < 0 || n > 100) {
//        cout << "Invalid Queue Size!" << endl;
//        return 0;
//    }
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter Element: ";
//        cin >> value;
//        q.enqueue(value);
//    }
//
//    cout << "\nOriginal Queue:" << endl;
//    q.display();
//
//    cout << "\nEnter K: ";
//    cin >> k;
//
//    if (k < 0) {
//        cout << "Invalid K!" << endl;
//        return 0;
//    }
//
//    q.reverseFirstK(k);
//
//    cout << "\nQueue After Reversing First K Elements:" << endl;
//    q.display();
//
//    return 0;
//}
