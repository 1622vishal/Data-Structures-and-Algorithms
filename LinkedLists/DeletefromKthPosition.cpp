/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to delete Kth node from doubly linked list*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1)       //This constructor is for the cases when we don't want to pass the nullptr everytime
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    Node(int data1 , Node* next1, Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* arraytoDLL(vector<int> arr)
{
    Node* Head = new Node(arr[0]);
    Node* temp = Head;
    for(int i=1 ; i<arr.size() ; i++)
    {
        Node* newnode = new Node(arr[i]);     //or Node* newnode = new Node(arr[i] , NULL , temp);
        newnode->prev = temp;
        temp->next = newnode;
        temp = temp->next;     //or temp = newnode;
    }
    return Head;
}

Node* deleteKth(Node* Head , int k)
{
    if(Head ==NULL)
        return NULL;
    if(Head->next == NULL)      //In this condition write a message for other values of k
    {
        free(Head);
        return NULL;
    }
    Node* temp = Head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        if(count == k)
        {
            break;
        }
        temp = temp->next;
    }
    if(temp->prev == NULL)
    {
        Node* front = temp->next;
        front->prev = NULL;
        temp->next = NULL;
        // temp = NULL;         I guess this is to avoid dangling pointers
        free(temp);
        return front;
    }
    if(temp->next == NULL)
    {
        Node* behind = temp->prev;
        behind->next = NULL;
        temp->prev = NULL;
        free(temp);
        return Head;
    }
    Node* behind = temp->prev;
    Node* front = temp->next;
    behind->next = front;
    front->prev = behind;
    temp->next = NULL;
    temp->prev = NULL;
    return Head;
}

int main()
{
    int k = 1;
    vector<int> arr = {34, 67, 98, 23, 44};
    Node* head = arraytoDLL(arr);

    head = deleteKth(head , k);

    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}