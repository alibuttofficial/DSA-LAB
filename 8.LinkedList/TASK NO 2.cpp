//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//void display(Node* head) {
//    if (head == NULL) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    Node* temp = head;
//
//    while (temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//
//    cout << endl;
//}
//
//void insertAtEnd(Node*& head, int value) {
//    Node* newNode = new Node;
//    newNode->data = value;
//    newNode->next = NULL;
//
//    if (head == NULL) {
//        head = newNode;
//        return;
//    }
//
//    Node* temp = head;
//
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//
//    temp->next = newNode;
//}
//
//void deleteFromBeginning(Node*& head) {
//    if (head == NULL) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    Node* temp = head;
//    head = head->next;
//    delete temp;
//
//    cout << "First node deleted" << endl;
//}
//
//void deleteFromEnd(Node*& head) {
//    if (head == NULL) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    if (head->next == NULL) {
//        delete head;
//        head = NULL;
//        cout << "Last node deleted" << endl;
//        return;
//    }
//
//    Node* temp = head;
//
//    while (temp->next->next != NULL) {
//        temp = temp->next;
//    }
//
//    delete temp->next;
//    temp->next = NULL;
//
//    cout << "Last node deleted" << endl;
//}
//
//void deleteFromPosition(Node*& head, int position) {
//    if (head == NULL) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    if (position == 1) {
//        deleteFromBeginning(head);
//        return;
//    }
//
//    Node* temp = head;
//
//    for (int i = 1; i < position - 1 && temp != NULL; i++) {
//        temp = temp->next;
//    }
//
//    if (temp == NULL || temp->next == NULL) {
//        cout << "Invalid position" << endl;
//        return;
//    }
//
//    Node* deleteNode = temp->next;
//    temp->next = deleteNode->next;
//    delete deleteNode;
//
//    cout << "Node deleted" << endl;
//}
//
//void search(Node* head, int value) {
//    Node* temp = head;
//    int position = 1;
//
//    while (temp != NULL) {
//        if (temp->data == value) {
//            cout << "Value found at position " << position << endl;
//            return;
//        }
//
//        temp = temp->next;
//        position++;
//    }
//
//    cout << "Value not found" << endl;
//}
//
//void update(Node* head, int position, int newValue) {
//    Node* temp = head;
//
//    for (int i = 1; i < position && temp != NULL; i++) {
//        temp = temp->next;
//    }
//
//    if (temp == NULL) {
//        cout << "Invalid position" << endl;
//        return;
//    }
//
//    temp->data = newValue;
//
//    cout << "Value updated" << endl;
//}
//
//int main() {
//    Node* head = NULL;
//    int choice;
//    int value;
//    int position;
//    int newValue;
//
//    do {
//        cout << "\n1. Insert at End";
//        cout << "\n2. Delete from Beginning";
//        cout << "\n3. Delete from End";
//        cout << "\n4. Delete from Position";
//        cout << "\n5. Search";
//        cout << "\n6. Update";
//        cout << "\n7. Display";
//        cout << "\n8. Exit";
//        cout << "\nEnter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Enter value: ";
//            cin >> value;
//            insertAtEnd(head, value);
//        }
//        else if (choice == 2) {
//            deleteFromBeginning(head);
//        }
//        else if (choice == 3) {
//            deleteFromEnd(head);
//        }
//        else if (choice == 4) {
//            cout << "Enter position: ";
//            cin >> position;
//            deleteFromPosition(head, position);
//        }
//        else if (choice == 5) {
//            cout << "Enter value to search: ";
//            cin >> value;
//            search(head, value);
//        }
//        else if (choice == 6) {
//            cout << "Enter position: ";
//            cin >> position;
//            cout << "Enter new value: ";
//            cin >> newValue;
//            update(head, position, newValue);
//        }
//        else if (choice == 7) {
//            display(head);
//        }
//        else if (choice == 8) {
//            cout << "Program ended" << endl;
//        }
//        else {
//            cout << "Invalid choice" << endl;
//        }
//
//    } while (choice != 8);
//
//    return 0;
//}