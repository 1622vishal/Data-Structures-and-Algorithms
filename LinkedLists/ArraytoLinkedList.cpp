/*----Written by :- Vishal Yadav----*/
/*----Date :- 30-11-23----*/

/*Program to convert Array to Linked List and return the head of Linked List*/

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

int main()
{
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);
    cout<<head->data;
    return 0;
}