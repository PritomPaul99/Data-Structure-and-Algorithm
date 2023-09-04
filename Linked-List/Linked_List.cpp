#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

typedef class Node node;

node *head = NULL;

// Declare the functions.
void printNode();
void push(int NewData);

int main()
{
    int n;

    // push(10);
    // push(20);
    // push(30);

    cout << "Enter number of nodes: ";
    cin >> n;

    while (n--)
    {
        int data;
        cin >> data;
        push(data);
    }

    printNode();
    return 0;
}

void printNode()
{
    node *temp = NULL;

    if (head == NULL)
    {
        cout << "Error! Empty list." << endl;
        return;
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;

        
        return;
    }
}

void push(int NewData)
{
    node *NewNode = new node;
    node *temp = new node;

    if (NewNode == NULL)
    {
        cout << "Error!" << endl;
        return;
    }
    else
    {
        NewNode->data = NewData; // Created a new node
        NewNode->next = NULL;

        if (head == NULL)
        {
            /**
             * if the head is null, that means, there are no new node, a new node is added.
             */
            head = NewNode;
            NewNode->next = NULL;

            cout << "Data pushed! <" << NewData << ">" << endl;
            return;
        }
        else
        {
            /**
             * if the head is not null, that means, there are already onr or more node(s) in the list, it is
             * necessary to traverse to the end of the list and add new data.
             */
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = NewNode;

            cout << "Data pushed! <" << NewData << ">" << endl;
            return;
        }
    }
}