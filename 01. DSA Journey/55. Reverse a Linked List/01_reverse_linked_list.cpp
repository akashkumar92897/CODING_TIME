#include <iostream>
using namespace std;
// Node structure
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
// Linked List class
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Insert node at the end
    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Reverse linked list
    void reverseList()
    {
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    // Display linked list
    void printList()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Destructor
    ~LinkedList()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main()
{
    LinkedList ll;

    // Create linked list
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);

    cout << "Original Linked List: ";
    ll.printList();

    // Reverse linked list
    ll.reverseList();

    cout << "Reversed Linked List: ";
    ll.printList();

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)