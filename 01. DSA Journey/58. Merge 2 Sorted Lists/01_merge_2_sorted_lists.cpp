#include <iostream>
using namespace std;

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

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Insert node at the end
    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Recursive function to merge two sorted linked lists
    Node *mergeTwoLists(Node *head1, Node *head2)
    {
        // Base case
        if (head1 == nullptr || head2 == nullptr)
        {
            return head1 == nullptr ? head2 : head1;
        }

        // Case 1: First list has smaller or equal value
        if (head1->data <= head2->data)
        {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        }

        // Case 2: Second list has smaller value
        else
        {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }

    // Print linked list
    void printList(Node *node)
    {
        while (node != nullptr)
        {
            cout << node->data << " -> ";
            node = node->next;
        }

        cout << "NULL" << endl;
    }

    // Get head node
    Node *getHead()
    {
        return head;
    }

    // Destructor
    ~LinkedList()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = nullptr;
        tail = nullptr;
    }
};

int main()
{
    LinkedList list1;
    LinkedList list2;

    // First sorted linked list
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(4);

    // Second sorted linked list
    list2.push_back(1);
    list2.push_back(3);
    list2.push_back(4);

    cout << "FIRST LINKED LIST" << endl;
    list1.printList(list1.getHead());

    cout << "\nSECOND LINKED LIST" << endl;
    list2.printList(list2.getHead());

    // Merge both lists
    Node *mergedHead = list1.mergeTwoLists(
        list1.getHead(),
        list2.getHead());

    cout << "\nMERGED LINKED LIST" << endl;
    list1.printList(mergedHead);

    return 0;
}

// Time Complexity = O(n+m)
// Space Complexity = O(n+m)