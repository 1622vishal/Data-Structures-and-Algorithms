/*----Written by :- Vishal Yadav----*/
/*----Date :- 02-12-23----*/

/*Program to insert a node Kth position in a doubly linked list*/

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

Node* insertatK(Node* Head, int value  , int k)
{
    if(Head == NULL)
    {
        Node* newnode = new Node(value);
        return Head;
    }
    if(k==1)
    {
        Node* newnode = new Node(value , Head , nullptr);
        Head->prev = newnode;
        return newnode;
    }
    Node* temp = Head;
    int count = 0;
    while(temp)
    {
        count++;
        if(count == k)
        {
            Node* newnode = new Node(value , temp, temp->prev);
            temp->prev->next = newnode;
            temp->prev = newnode;
            break;
        }
        temp = temp->next;
    }
    return Head;
}

int main()
{
    int k = 3;
    int value = 100;
    vector<int> arr = {34, 67, 98, 23, 44};
    Node* head = arraytoDLL(arr);
    head = insertatK(head , value , k);
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}