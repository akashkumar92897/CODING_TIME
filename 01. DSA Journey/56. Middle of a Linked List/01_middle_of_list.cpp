// Middle of a linked list => Brute force approach

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert node at the end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Find size of linked list
    int getSize() {
        int size = 0;
        Node* temp = head;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        return size;
    }

    // Find middle node using size
    int findMiddle() {
        int size = getSize();

        if (size == 0) {
            cout << "Linked List is empty\n";
            return -1;
        }

        int middle = size / 2 + 1;

        Node* temp = head;

        for (int i = 1; i < middle; i++) {
            temp = temp->next;
        }

        return temp->data;
    }

    // Display linked list
    void printList() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // Destructor
    ~LinkedList() {
        Node* temp = head;

        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    LinkedList ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.push_back(60);

    cout << "Linked List: ";
    ll.printList();

    cout << "Middle Element: " << ll.findMiddle() << endl;

    return 0;
}

// Operation        =   Complexity
// Calculate size	=   O(n)
// Find middle	    =   O(n)
// Total time	    =   O(n)
// Auxiliary space	=   O(1)