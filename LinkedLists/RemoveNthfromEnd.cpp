/*----Written by :- Vishal Yadav----*/
/*----Date :- 04-12-23----*/

/*Program to remove Nth node from end in a Linked List*/

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

Node* removenth(Node* Head , int n)
{
    Node* fast = Head;
    for(int i=0 ; i<n ; i++)
    {
        fast = fast->next;
    }
    if(fast == NULL)
    {
        Node* tobedel = Head;
        Head = Head->next;
        free(tobedel);
        return Head;
    }
    Node* slow = Head;
    while(fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    Node* tobedel = slow->next;
    slow->next = slow->next->next;
    free(tobedel);
    return Head;
}

int main()
{
    int n = 2;
    vector<int> arr = {99, 54, 67, 32, 87, 100};
    Node* head = AtoLL(arr);

    head = removenth(head , n);

    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}