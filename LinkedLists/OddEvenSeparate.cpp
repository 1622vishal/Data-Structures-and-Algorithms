/*----Written by :- Vishal Yadav----*/
/*----Date :- 04-12-23----*/

/*Program to separate nodes at odd places and nodes at even places of a Linked List*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1)
    {
        data = data1;
        Node* next = nullptr;
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

Node* separate(Node* Head)
{
    Node* oddnode = Head;
    Node* evennode = Head->next;
    Node* evenHead = Head->next;
    while(evennode!= NULL && evennode->next!=NULL)      //We have to check for evennode for odd(no. of nodes) linked list 
    {
        oddnode->next = oddnode->next->next;
        evennode->next = evennode->next->next;
        oddnode = oddnode->next;
        evennode = evennode->next;
    }
    oddnode->next = evenHead;
    return Head;
}

int main()
{
    vector<int> arr = {99, 54, 67, 32 , 11 , 100};
    Node* head = AtoLL(arr);

    head = separate(head);
    Node* temp = head;
    while(temp)       
    {
        cout<<temp->data<<" ";
        temp = temp->next;      
    }
    return 0;
}