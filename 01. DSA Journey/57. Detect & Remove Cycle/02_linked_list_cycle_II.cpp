
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
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert node at the end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Create a cycle at the given 0-based position
    bool createCycle(int position) {
        if (head == nullptr || position < 0) {
            return false;
        }

        Node* cycleNode = head;

        for (int i = 0; i < position; i++) {
            if (cycleNode == nullptr) {
                return false;
            }
            cycleNode = cycleNode->next;
        }

        if (cycleNode == nullptr) {
            return false;
        }

        tail->next = cycleNode;
        return true;
    }

    // Detect cycle and return its starting node
    Node* detectCycle() {
        Node* slow = head;
        Node* fast = head;

        // Phase 1: Detect cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Phase 2: Find cycle starting node
                slow = head;

                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return nullptr;
    }

    // Print only if the list has no cycle
    void printList() {
        if (detectCycle() != nullptr) {
            cout << "Cannot print: cycle detected!" << endl;
            return;
        }

        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Destructor: break cycle before deleting nodes
    ~LinkedList() {
        Node* cycleStart = detectCycle();

        if (cycleStart != nullptr) {
            Node* last = cycleStart;

            while (last->next != cycleStart) {
                last = last->next;
            }

            last->next = nullptr;
        }

        Node* temp = head;

        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = nullptr;
        tail = nullptr;
    }
};

int main() {
    LinkedList list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);

    cout << "ORIGINAL LINKED LIST" << endl;
    list.printList();

    // Create cycle: last node (50) points to node at index 2 (30)
    list.createCycle(2);

    cout << "\nCYCLE DETECTION" << endl;

    Node* cycleStart = list.detectCycle();

    if (cycleStart != nullptr) {
        cout << "Cycle detected!" << endl;
        cout << "Cycle starts at node: " << cycleStart->data << endl;
    } else {
        cout << "No cycle detected!" << endl;
    }

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)