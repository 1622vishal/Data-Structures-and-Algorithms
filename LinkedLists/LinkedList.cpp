/*----Written by :- Vishal Yadav----*/
/*----Date :- 30-11-23----*/

/*Program to implement linked list*/

#include<bits/stdc++.h>
using namespace std;

class Node{            //In C we use struct, we can also use it here but prefer class because it is better than struct
    public:
    int data;
    Node* next;

    Node(int x, Node* ptr)   //Constructor
    {
        data = x;
        next = ptr;
    }
};

int main()
{
    Node N1(5,nullptr);     
    Node N2 = Node(6,nullptr);     //Both lines are same
    //Above two lines are just creating two variables of Node type that's it(these two variables have nothing to do with LL). Slowly we are coming to LL 

    Node *N3 = new Node(7, nullptr);   //This is also the same thing but did dynamically and one more difference is that this node has a pointer associated with it (N3).
    cout<<"Pointer to this node is "<<N3<<endl;
    cout<<"Data is "<<N3->data<<endl;           //N3->data is similar to (*N3).data
    cout<<"Pointer(Null) is "<<N3->next;

    //Create one more Node 

    Node* N4 = new Node(8,N3);    //In this Node I gave the pointer N3 which points to N3 node
    cout<<"Pointer to this node is "<<N4<<endl;
    cout<<"Data is "<<N4->data<<endl;           
    cout<<"Pointer(Null) is "<<N4->next;   //See output 

    //What we have done here is that we kinda connected these two nodes  and this ultimately forms the basis of LL 
    //Now you can clearly see that our linked list is getting a shape 

    return 0;
}