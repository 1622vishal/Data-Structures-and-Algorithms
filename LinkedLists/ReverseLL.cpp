/*----Written by :- Vishal Yadav----*/
/*----Date :- 04-12-23----*/

/*Program to reverse a Linked List*/

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

Node* reverse(Node* Head)
{
    if(Head == NULL || Head->next == NULL)
        return Head;
    Node* temp = Head;
    Node* behind = NULL;
    Node* front = Head->next;
    while(temp)
    {
        temp->next = behind;
        behind = temp;
        temp = front;
        if(front) front = front->next;
    }
    return behind;
}

//Recursive Solution
/*************************************************************************************************************************
Node* reverseLL(Node* Head)
{
    if(Head == NULL || Head->next == NULL)
        return Head;
    
    Node* newHead = reverse(Head->next);
    Node* front = Head->next;
    front->next = Head;
    Head->next = NULL;
    return newHead;
}
*************************************************************************************************************************/

int main()
{
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);

    head = reverse(head);
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}