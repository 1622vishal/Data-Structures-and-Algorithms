/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to insert a node at the beginning of a Linked List*/

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
    Node* Head = new Node(arr[0]);      //In ArraytoLinkedList code we took some extra pointers which might sometimes make things delicate.So, be very careful with pointers.     
    Node* Tonext = Head;
    for(int i=1 ; i<arr.size() ; i++)
    {
        Node* tempnode = new Node(arr[i]);
        Tonext->next = tempnode;
        Tonext = tempnode;
    }
    return Head;
}

Node* insertbeg(Node* Head , int value)
{
    Node* temp = new Node(value, Head);
    //Head = temp;
    //return Head;       //We can do this also
    return temp;
}

int main()
{
    int value = 100;
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);        //We got the head(pointer actually) of LL
    head = insertbeg(head, value);
    Node* temp = head;
    while(temp)       
    {
        cout<<temp->data<<" ";
        temp = temp->next;      
    }
    return 0;
}