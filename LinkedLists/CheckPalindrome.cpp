/*----Written by :- Vishal Yadav----*/
/*----Date :- 05-12-23----*/

/*Program to check if a Linked List is palindrome or not*/

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

bool ispal(Node* Head)
{
    if(Head == NULL || Head->next == NULL)
        return true;;
    Node* slow = Head;
    Node* fast = Head;
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* firstHead = Head;
    Node* secondHead = slow->next;
    secondHead = reverse(secondHead);
    Node* tempHead = secondHead;
    while(secondHead)
    {
        if(firstHead->data != secondHead->data)
        {
            reverse(tempHead);
            return false;
        }
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }
    reverse(tempHead);
    return true;
}

int main()
{
    vector<int> arr = {1,2,3,2,1};
    Node* head = AtoLL(arr);

    if(ispal(head))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    
    return 0;
}