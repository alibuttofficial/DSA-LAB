#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(Node*& head, int value, int position) {
    if (head == NULL) {
        if (position == 1) {
            insertAtBeginning(head, value);
        }
        else {
            cout << "Invalid position" << endl;
        }
        return;
    }

    Node* temp = head;

    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = NULL;
    int choice, value, position;

    do {
        cout << "\n1. Insert at Beginning";
        cout << "\n2. Insert at End";
        cout << "\n3. Insert after Position";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            insertAtBeginning(head, value);
        }
        else if (choice == 2) {
            cout << "Enter value: ";
            cin >> value;
            insertAtEnd(head, value);
        }
        else if (choice == 3) {
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> position;
            insertAtPosition(head, value, position);
        }
        else if (choice == 4) {
            display(head);
        }
        else if (choice == 5) {
            cout << "Program ended";
        }
        else {
            cout << "Invalid choice";
        }

    } while (choice != 5);

    return 0;
}
