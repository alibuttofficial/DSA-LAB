//#include <iostream>
//using namespace std;
//
//struct Node {
//    int x;
//    int y;
//    Node* next;
//};
//
//void printSnake(Node* head) {
//    Node* temp = head;
//
//    cout << "Snake: ";
//
//    while (temp != NULL) {
//        cout << "(" << temp->x << "," << temp->y << ")";
//
//        if (temp->next != NULL) {
//            cout << " -> ";
//        }
//
//        temp = temp->next;
//    }
//
//    cout << endl;
//}
//
//bool collisionCheck(Node* head, int x, int y) {
//    Node* temp = head;
//
//    while (temp != NULL) {
//        if (temp->x == x && temp->y == y) {
//            return true;
//        }
//
//        temp = temp->next;
//    }
//
//    return false;
//}
//
//void grow(Node*& head, int x, int y) {
//    Node* newNode = new Node;
//    newNode->x = x;
//    newNode->y = y;
//    newNode->next = head;
//    head = newNode;
//}
//
//void move(Node*& head, int x, int y, bool food) {
//    if (collisionCheck(head, x, y)) {
//        cout << "Collision detected at (" << x << "," << y << ")" << endl;
//        return;
//    }
//
//    grow(head, x, y);
//
//    if (food == false) {
//        Node* temp = head;
//
//        if (temp->next == NULL) {
//            return;
//        }
//
//        while (temp->next->next != NULL) {
//            temp = temp->next;
//        }
//
//        delete temp->next;
//        temp->next = NULL;
//    }
//
//    printSnake(head);
//}
//
//int main() {
//    Node* head = NULL;
//
//    grow(head, 3, 3);
//    grow(head, 3, 2);
//    grow(head, 3, 1);
//
//    cout << "Initial snake:" << endl;
//    printSnake(head);
//
//    cout << "\nMove 1:" << endl;
//    move(head, 4, 1, false);
//
//    cout << "\nMove 2:" << endl;
//    move(head, 4, 2, true);
//
//    cout << "\nMove 3:" << endl;
//    move(head, 4, 3, false);
//
//    cout << "\nMove 4:" << endl;
//    move(head, 3, 3, true);
//
//    return 0;
//}