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

Node* add1(Node* Head)
{
    if(Head == NULL)
    {
        Node* newnode = new Node(1);
        return newnode;
    }
        
    int num = 1;
    int carry = 0;
    Node* newHead = reverse(Head);
    Node* temp = newHead;
    int curdata = temp->data;
    temp->data = (curdata + carry + num)%10;
    carry = (curdata + carry + num)/10;
    temp = temp->next;
    Node* lastcarry;
    while(temp)
    {
        if(!carry)
            break;
        curdata = temp->data;
        temp->data = (curdata + carry)%10;
        carry = (curdata + carry)/10;
        lastcarry = temp;
        temp = temp->next;
    }
    newHead = reverse(newHead);
    if(carry)
    {
        Node* carrynode = new Node(1, newHead);
        newHead = carrynode;
    }
    return newHead;
}

int main()
{
    vector<int> arr = {1};
    Node* head = AtoLL(arr);
    
    head = add1(head);
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}