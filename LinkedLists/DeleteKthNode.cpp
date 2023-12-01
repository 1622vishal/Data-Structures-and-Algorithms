/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to Kth element in a Linked List*/

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

Node* deleteKth(Node* Head , int k)
{
    if(Head == NULL)
        return Head;

    Node* temp = Head;
    if(k==1)      //We have to check the list if it have single element because it can't be done with below code
    {
        Head = Head->next;
        free(temp);
        return Head;        
    }

    int count=0;   //To keep track of which node we are currently at.
    Node* prev = NULL;
    while(temp)
    {
        count++;
        if(count == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return Head;
}

int main()
{
    int k=3;
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);        //We got the head(pointer actually) of LL
    head = deleteKth(head , k);
    Node* temp = head;
    while(temp)       
    {
        cout<<temp->data<<" ";
        temp = temp->next;      
    }
    return 0;
}