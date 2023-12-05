/*----Written by :- Vishal Yadav----*/
/*----Date :- 05-12-23----*/

/*Program to add 1 in a Linked List given as a number*/

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
    Node* N1 = new Node(arr[0]);
    Node* Head = N1;               //Head is just pointer which always points to the first element
    Node* Tonext = N1;
    for(int i=1 ; i<arr.size() ; i++)
    {
        Node* tempnode = new Node(arr[i]);
        Tonext->next = tempnode;
        Tonext = tempnode;
    }
    return Head;
}

int add1(Node* Head)
{
    if(Head == NULL)
    {
        return 1;
    }
    int carry = add1(Head->next);
    if((Head->data + carry)<10)
    {
        Head->data = Head->data + carry;
        return 0;
    }
    Head->data = 0;
    return 1;
}

Node* carryadder(Node* Head)
{
    if(add1(Head))
    {
        Node* newHead = new Node(1 , Head);
        return newHead;
    }
    return Head;
}

int main()
{
    vector<int> arr = {1,4,9};
    Node* head = AtoLL(arr);
    
    head = carryadder(head);
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}