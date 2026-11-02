
#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked List class
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

    // Create cycle at given index (0-based)
    void createCycle(int position) {
        if (head == nullptr || position < 0) return;

        Node* temp = head;
        Node* target = nullptr;
        int index = 0;

        while (temp->next != nullptr) {
            if (index == position) {
                target = temp;
            }

            temp = temp->next;
            index++;
        }

        if (index == position) {
            target = temp;
        }

        if (target != nullptr) {
            temp->next = target;
        }
    }

    // Detect cycle using slow and fast pointers
    bool hasCycle() {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }

    // Display linked list (only for normal lists)
    void printList() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // Destructor: safely handles cyclic and normal lists
    ~LinkedList() {
        Node* slow = head;
        Node* fast = head;

        // Detect cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;
            }
        }

        // Break cycle if one exists
        if (fast != nullptr && fast->next != nullptr) {
            slow = head;

            if (slow == fast) {
                while (fast->next != slow) {
                    fast = fast->next;
                }
            } else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            fast->next = nullptr;
        }

        // Delete all nodes
        Node* temp = head;

        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {

    // 1. Normal Linked List
    LinkedList normalList;

    normalList.push_back(10);
    normalList.push_back(20);
    normalList.push_back(30);
    normalList.push_back(40);
    normalList.push_back(50);

    cout << "NORMAL LINKED LIST\n";

    normalList.printList();

    if (normalList.hasCycle()) {
        cout << "Cycle detected!\n";
    } else {
        cout << "No cycle detected!\n";
    }

    cout << "\n";

    // 2. Cyclic Linked List
    LinkedList cyclicList;

    cyclicList.push_back(10);
    cyclicList.push_back(20);
    cyclicList.push_back(30);
    cyclicList.push_back(40);
    cyclicList.push_back(50);

    // Connect last node (50) to node at index 1 (20)
    cyclicList.createCycle(1);

    cout << "CYCLIC LINKED LIST\n";

    if (cyclicList.hasCycle()) {
        cout << "Cycle detected!\n";
    } else {
        cout << "No cycle detected!\n";
    }

    return 0;
}

// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)