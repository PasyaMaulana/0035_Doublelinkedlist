#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int NoMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        string nm;
        cout << "\nEnter the roll number of the student";
        cin >> nim;

        // Step 1: Allocate memory for new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data fields
        newNode->NoMhs = nim;
    }
};