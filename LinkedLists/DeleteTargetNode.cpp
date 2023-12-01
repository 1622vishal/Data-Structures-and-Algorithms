/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-12-23----*/

/*Program to delete the element that match a specified value in a Linked List*/

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
    Node* Head = new Node(arr[0]);          
    Node* Tonext = Head;
    for(int i=1 ; i<arr.size() ; i++)
    {
        Node* tempnode = new Node(arr[i]);
        Tonext->next = tempnode;
        Tonext = tempnode;
    }
    return Head;
}

Node* deletevalue(Node* Head , int value)
{
    if(Head == NULL)
        return Head;

    Node* temp = Head;
    if(value==Head->data)      //We have to check the list if it have single element because it can't be done with below code
    {
        Head = Head->next;
        free(temp);
        return Head;        
    }

    Node* prev = NULL;
    while(temp)
    {
        if(value == temp->data)        //This will work perfect because even if temp is at Head at first the if condition will never satisfy for the first node and won't create any anomaly
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
    int value = 67;
    vector<int> arr = {99, 54, 67, 32};
    Node* head = AtoLL(arr);        //We got the head(pointer actually) of LL
    head = deletevalue(head , value);
    Node* temp = head;
    while(temp)       
    {
        cout<<temp->data<<" ";
        temp = temp->next;      
    }
    return 0;
}