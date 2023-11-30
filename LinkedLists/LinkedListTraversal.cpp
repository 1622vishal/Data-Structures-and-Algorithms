/*----Written by :- Vishal Yadav----*/
/*----Date :- 30-11-23----*/

/*Program to traverse a Linked List*/

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

int main()
{
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);        //We got the head(pointer actually) of LL
    Node* temp = head;
    while(temp)       //When head points to null it will stop
    {
        cout<<temp->data<<" ";
        temp = temp->next;       //This line will make temp point to next element
    }
    return 0;
}