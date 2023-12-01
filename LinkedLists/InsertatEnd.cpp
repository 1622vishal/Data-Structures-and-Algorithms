/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to insert a node at the end of a Linked List*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    Node(int data1 , Node* next1)
    {
        data = data1;
        next = next1;
    }
};

Node* AtoLL(vector<int> arr)
{
    Node* Head = new Node(arr[0]);           
    Node* Tonext = Head;
    for(int i=1 ; i<arr.size() ; i++)
    {
        Node* tempnode = new Node(arr[i]);
        Tonext->next = tempnode;
        Tonext = tempnode;
    }
    return Head;
}

Node* insertend(Node* Head , int value)
{
    if(Head == NULL)
    {
        Node* newnode = new Node(value);
        return newnode;
    }
    Node* newnode = new Node(value);
    Node* temp = Head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return Head;
}

int main()
{
    int value = 100;
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);        //We got the head(pointer actually) of LL
    head = insertend(head, value);
    Node* temp = head;
    while(temp)       
    {
        cout<<temp->data<<" ";
        temp = temp->next;      
    }
    return 0;
}