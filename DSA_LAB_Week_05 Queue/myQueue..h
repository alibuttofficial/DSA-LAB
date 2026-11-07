//
//#ifndef MYQUEUE_H
//#define MYQUEUE_H
//
//#include <iostream>
//#include "AbstractQueue.h"
//using namespace std;
//
//template <typename T>
//class myQueue : public AbstractQueue<T> {
//private:
//    T* arr;
//    int size;
//    int frontIndex;
//    int rear;
//    int count;
//
//public:
//    myQueue(int s) {
//        size = s;
//        arr = new T[size];
//        frontIndex = 0;
//        rear = -1;
//        count = 0;
//    }
//
//    void enQueue(T value) {
//        if (isFull()) {
//            cout << "Queue is Full!" << endl;
//        }
//        else {
//            rear = (rear + 1) % size;
//            arr[rear] = value;
//            count++;
//            cout << "Element Inserted Successfully" << endl;
//        }
//    }
//
//    T deQueue() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//
//        T value = arr[frontIndex];
//        frontIndex = (frontIndex + 1) % size;
//        count--;
//        return value;
//    }
//
//    T front() const {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//        return arr[frontIndex];
//    }
//
//    bool isEmpty() const {
//        return count == 0;
//    }
//
//    bool isFull() const {
//        return count == size;
//    }
//
//    void display() const {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//        }
//        else {
//            cout << "Queue Elements: ";
//            for (int i = 0; i < count; i++) {
//                cout << arr[(frontIndex + i) % size] << " ";
//            }
//            cout << endl;
//        }
//    }
//
//    ~myQueue() {
//        delete[] arr;
//    }
//};
//
//#endif
