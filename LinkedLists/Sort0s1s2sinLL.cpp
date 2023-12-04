/*----Written by :- Vishal Yadav----*/
/*----Date :- 04-12-23----*/

/*Program to sort 0s, 1s and 2s in a Linked List*/

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

Node* sorter(Node* Head)
{
    if(Head == NULL || Head->next == NULL)
        return Head;
    Node* zerodummy = new Node(-1);
    Node* onedummy = new Node(-1);
    Node* twodummy = new Node(-1);
    Node* zeromover = zerodummy;
    Node* onemover = onedummy;
    Node* twomover = twodummy;

    Node* temp = Head;
    while(temp)
    {
        if(temp->data == 0)
        {
            zeromover->next = temp;
            zeromover = zeromover->next;
        }
        if(temp->data == 1)
        {
            onemover->next = temp;
            onemover = onemover->next;
        }
        if(temp->data == 2)
        {
            twomover->next = temp;
            twomover = twomover->next;
        }
        temp = temp->next;
    }
    zeromover->next = onedummy->next? onedummy->next : twodummy->next;
    onemover->next = twodummy->next;
    twomover->next = NULL;
    Head = zerodummy->next;
    free(zerodummy);
    free(onedummy);
    free(twodummy);

    return Head;

}


int main()
{
    vector<int> arr = {0, 2, 1, 0, 0, 2, 0, 1, 2, 1 ,0};
    Node* head = AtoLL(arr);

    head = sorter(head);

    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}