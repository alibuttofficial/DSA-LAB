//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Node {
//    int rollNo;
//    string name;
//    float marks;
//    Node* next;
//};
//
//void insertAtBeginning(Node*& head, int rollNo, string name, float marks) {
//    Node* newNode = new Node;
//    newNode->rollNo = rollNo;
//    newNode->name = name;
//    newNode->marks = marks;
//    newNode->next = head;
//    head = newNode;
//}
//
//void insertAtEnd(Node*& head, int rollNo, string name, float marks) {
//    Node* newNode = new Node;
//    newNode->rollNo = rollNo;
//    newNode->name = name;
//    newNode->marks = marks;
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
//void insertAfterRollNo(Node*& head, int rollNo, string name, float marks, int afterRollNo) {
//    Node* temp = head;
//
//    while (temp != NULL) {
//        if (temp->rollNo == afterRollNo) {
//            Node* newNode = new Node;
//            newNode->rollNo = rollNo;
//            newNode->name = name;
//            newNode->marks = marks;
//            newNode->next = temp->next;
//            temp->next = newNode;
//            cout << "Student inserted" << endl;
//            return;
//        }
//
//        temp = temp->next;
//    }
//
//    cout << "Roll number not found" << endl;
//}
//
//void deleteStudent(Node*& head, int rollNo) {
//    if (head == NULL) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    if (head->rollNo == rollNo) {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//        cout << "Student deleted" << endl;
//        return;
//    }
//
//    Node* temp = head;
//
//    while (temp->next != NULL) {
//        if (temp->next->rollNo == rollNo) {
//            Node* deleteNode = temp->next;
//            temp->next = deleteNode->next;
//            delete deleteNode;
//            cout << "Student deleted" << endl;
//            return;
//        }
//
//        temp = temp->next;
//    }
//
//    cout << "Roll number not found" << endl;
//}
//
//void display(Node* head) {
//    if (head == NULL) {
//        cout << "No student records" << endl;
//        return;
//    }
//
//    Node* temp = head;
//
//    cout << "\nRoll No\tName\tMarks" << endl;
//
//    while (temp != NULL) {
//        cout << temp->rollNo << "\t" << temp->name << "\t" << temp->marks << endl;
//        temp = temp->next;
//    }
//}
//
//void searchStudent(Node* head, int rollNo) {
//    Node* temp = head;
//
//    while (temp != NULL) {
//        if (temp->rollNo == rollNo) {
//            cout << "Roll No: " << temp->rollNo << endl;
//            cout << "Name: " << temp->name << endl;
//            cout << "Marks: " << temp->marks << endl;
//            return;
//        }
//
//        temp = temp->next;
//    }
//
//    cout << "Student not found" << endl;
//}
//
//void updateStudent(Node* head, int rollNo) {
//    Node* temp = head;
//
//    while (temp != NULL) {
//        if (temp->rollNo == rollNo) {
//            int choice;
//
//            cout << "1. Update Name" << endl;
//            cout << "2. Update Marks" << endl;
//            cout << "Enter choice: ";
//            cin >> choice;
//
//            if (choice == 1) {
//                cout << "Enter new name: ";
//                cin >> temp->name;
//                cout << "Name updated" << endl;
//            }
//            else if (choice == 2) {
//                cout << "Enter new marks: ";
//                cin >> temp->marks;
//                cout << "Marks updated" << endl;
//            }
//            else {
//                cout << "Invalid choice" << endl;
//            }
//
//            return;
//        }
//
//        temp = temp->next;
//    }
//
//    cout << "Student not found" << endl;
//}
//
//void statistics(Node* head) {
//    if (head == NULL) {
//        cout << "No student records" << endl;
//        return;
//    }
//
//    Node* temp = head;
//
//    float highest = temp->marks;
//    float lowest = temp->marks;
//    float total = 0;
//    int count = 0;
//
//    while (temp != NULL) {
//        if (temp->marks > highest) {
//            highest = temp->marks;
//        }
//
//        if (temp->marks < lowest) {
//            lowest = temp->marks;
//        }
//
//        total = total + temp->marks;
//        count++;
//
//        temp = temp->next;
//    }
//
//    cout << "Highest Marks: " << highest << endl;
//    cout << "Lowest Marks: " << lowest << endl;
//    cout << "Average Marks: " << total / count << endl;
//}
//
//int main() {
//    Node* head = NULL;
//
//    int choice;
//    int rollNo;
//    int afterRollNo;
//    string name;
//    float marks;
//
//    do {
//        cout << "\n1. Insert at Beginning";
//        cout << "\n2. Insert at End";
//        cout << "\n3. Insert After Roll Number";
//        cout << "\n4. Delete Student";
//        cout << "\n5. Display Students";
//        cout << "\n6. Search Student";
//        cout << "\n7. Update Student";
//        cout << "\n8. Statistics";
//        cout << "\n9. Exit";
//        cout << "\nEnter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Enter roll number: ";
//            cin >> rollNo;
//
//            cout << "Enter name: ";
//            cin >> name;
//
//            cout << "Enter marks: ";
//            cin >> marks;
//
//            insertAtBeginning(head, rollNo, name, marks);
//        }
//        else if (choice == 2) {
//            cout << "Enter roll number: ";
//            cin >> rollNo;
//
//            cout << "Enter name: ";
//            cin >> name;
//
//            cout << "Enter marks: ";
//            cin >> marks;
//
//            insertAtEnd(head, rollNo, name, marks);
//        }
//        else if (choice == 3) {
//            cout << "Enter roll number: ";
//            cin >> rollNo;
//
//            cout << "Enter name: ";
//            cin >> name;
//
//            cout << "Enter marks: ";
//            cin >> marks;
//
//            cout << "Enter roll number after which to insert: ";
//            cin >> afterRollNo;
//
//            insertAfterRollNo(head, rollNo, name, marks, afterRollNo);
//        }
//        else if (choice == 4) {
//            cout << "Enter roll number to delete: ";
//            cin >> rollNo;
//
//            deleteStudent(head, rollNo);
//        }
//        else if (choice == 5) {
//            display(head);
//        }
//        else if (choice == 6) {
//            cout << "Enter roll number to search: ";
//            cin >> rollNo;
//
//            searchStudent(head, rollNo);
//        }
//        else if (choice == 7) {
//            cout << "Enter roll number: ";
//            cin >> rollNo;
//
//            updateStudent(head, rollNo);
//        }
//        else if (choice == 8) {
//            statistics(head);
//        }
//        else if (choice == 9) {
//            cout << "Program ended" << endl;
//        }
//        else {
//            cout << "Invalid choice" << endl;
//        }
//
//    } while (choice != 9);
//
//    return 0;
//}