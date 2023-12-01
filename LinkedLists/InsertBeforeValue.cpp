/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to insert a node before a particular node whose value is given in a Linked List*/

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

Node* insertbeforevalue(Node* Head , int value , int target)
{
    if(Head==NULL)
    {
        return NULL;   //Because there is no value that matches target we will just return NULL
    }
    if(target == Head->data)
    {
        Node* newnode = new Node(value);
        newnode->next = Head;
        //Or instead of above two lines write this --- Node* newnode = new Node(value,Head);
        return newnode;
    }

    Node* temp = Head;
    while(temp->next)
    {
        if(target == temp->next->data)     //This will stop the temp just before the target, rest is same
        {
            Node* newnode = new Node(value);
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return Head;
}

int main()
{
    int value = 100;
    int target = 67;
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);        //We got the head(pointer actually) of LL
    head = insertbeforevalue(head , value , target);
    Node* temp = head;
    while(temp)       
    {
        cout<<temp->data<<" ";
        temp = temp->next;      
    }
    return 0;
}