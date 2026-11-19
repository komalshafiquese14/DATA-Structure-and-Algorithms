#include <iostream>
using namespace std;

// Define Node structure
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* newnode;

    int value;
    int count = 0;

    // Create five nodes dynamically
    cout << "Enter five integer values:" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter value " << i << ": ";
        cin >> value;

        newnode = new Node;

        newnode->data = value;
        newnode->prev = NULL;
        newnode->next = NULL;

        // Connect nodes
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    // Forward Traversal
    cout << "\nForward Traversal:" << endl;

    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Backward Traversal
    cout << "\nBackward Traversal:" << endl;

    temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;

    // Display total number of nodes
    cout << "\nTotal Nodes: " << count << endl;

    // Release dynamically allocated memory
    temp = head;

    while (temp != NULL)
    {
        Node* nextnode = temp->next;
        delete temp;
        temp = nextnode;
    }

    return 0;
}
