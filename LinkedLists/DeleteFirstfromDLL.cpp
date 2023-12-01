/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to delete first node from doubly linked list*/

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

Node* deletefirst(Node* Head)
{
    if(Head == nullptr)
        return NULL;
    if(Head->next == nullptr)
    {
        free(Head);
        return NULL;
    }
    Node* temp = Head;
    Head = Head->next;
    Head->prev = NULL;
    temp->next = NULL;
    free(temp);
    return Head;
}

int main()
{
    vector<int> arr = {34, 67, 98, 23, 44};
    Node* head = arraytoDLL(arr);

    head = deletefirst(head);
    
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}