#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;

    int value;
    int count = 0;

    // Create five nodes
    cout << "Enter 5 integer values:" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter value " << i << ": ";
        cin >> value;

        // Allocate memory dynamically
        newNode = new Node;

        newNode->data = value;
        newNode->next = NULL;

        // Connect nodes
        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display linked list using traversal
    cout << "\nLinked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Display total number of nodes
    cout << "Total Nodes: " << count << endl;

    // Release dynamically allocated memory
    temp = head;

    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    head = NULL;
     return(0);
 }
