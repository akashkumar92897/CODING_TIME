
#include <iostream>
#include <unordered_map>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int val) {
        data = val;
        next = nullptr;
        random = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert a node at the end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Get a node at a given 0-based index
    Node* getNode(int index) {
        Node* temp = head;

        for (int i = 0; i < index && temp != nullptr; i++) {
            temp = temp->next;
        }

        return temp;
    }

    // Assign random pointer using 0-based indices
    // Use -1 when random should point to nullptr
    bool setRandom(int fromIndex, int toIndex) {
        Node* from = getNode(fromIndex);

        if (from == nullptr) {
            return false;
        }

        if (toIndex == -1) {
            from->random = nullptr;
            return true;
        }

        Node* to = getNode(toIndex);

        if (to == nullptr) {
            return false;
        }

        from->random = to;
        return true;
    }

    // Print linked list with random pointer information
    void printList() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << "Node: " << temp->data;

            if (temp->random != nullptr) {
                cout << " | Random: " << temp->random->data;
            } else {
                cout << " | Random: NULL";
            }

            cout << endl;
            temp = temp->next;
        }
    }

    // Copy list with random pointers using unordered_map
    Node* copyRandomList(Node* originalHead) {
        if (originalHead == nullptr) {
            return nullptr;
        }

        // Map original node addresses to copied node addresses
        unordered_map<Node*, Node*> m;

        Node* oldTemp = originalHead;

        // PASS 1: Create a copy of every node
        while (oldTemp != nullptr) {
            m[oldTemp] = new Node(oldTemp->data);
            oldTemp = oldTemp->next;
        }

        oldTemp = originalHead;

        // PASS 2: Assign next and random pointers
        while (oldTemp != nullptr) {
            Node* copyNode = m[oldTemp];

            // Connect copied next pointer
            copyNode->next = (oldTemp->next == nullptr)
                                ? nullptr
                                : m[oldTemp->next];

            // Connect copied random pointer
            copyNode->random = (oldTemp->random == nullptr)
                                  ? nullptr
                                  : m[oldTemp->random];

            oldTemp = oldTemp->next;
        }

        // Return the head of the copied list
        return m[originalHead];
    }

    // Get original head
    Node* getHead() {
        return head;
    }

    // Take ownership of an existing copied list
    void setHead(Node* newHead) {
        head = newHead;
        tail = nullptr;

        Node* temp = head;

        while (temp != nullptr) {
            tail = temp;
            temp = temp->next;
        }
    }

    // Destructor: release all nodes owned by this list
    ~LinkedList() {
        Node* temp = head;

        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = nullptr;
        tail = nullptr;
    }

    // Prevent accidental shallow copying
    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;
};

int main() {
    LinkedList originalList;

    // Create original linked list
    originalList.push_back(7);
    originalList.push_back(13);
    originalList.push_back(11);
    originalList.push_back(10);
    originalList.push_back(1);

    // Assign random pointers using 0-based indices
    originalList.setRandom(0, -1); // 7  -> NULL
    originalList.setRandom(1, 0);  // 13 -> 7
    originalList.setRandom(2, 4);  // 11 -> 1
    originalList.setRandom(3, 2);  // 10 -> 11
    originalList.setRandom(4, 0);  // 1  -> 7

    // Display original linked list
    cout << "ORIGINAL LINKED LIST" << endl;
    originalList.printList();

    // Create a deep copy
    LinkedList copiedList;

    Node* copiedHead =
        copiedList.copyRandomList(originalList.getHead());

    // Transfer ownership of copied nodes to copiedList
    copiedList.setHead(copiedHead);

    // Display copied linked list
    cout << "\nCOPIED LINKED LIST" << endl;
    copiedList.printList();

    return 0;
}