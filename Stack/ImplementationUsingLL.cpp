/*----Written by :- Vishal Yadav----*/
/*----Date :- 23-02-24----*/

/*Implementing Stack using Linked List(It is implemented with the help of class)*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data , Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
    public:
    Node* temp;
    Node* top;
    int size;

    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int element)
    {
        if(top  == nullptr)
            temp = new Node(element,nullptr);
        else
            temp = new Node(element,top);
        top = temp;
        size++;
    }
    void pop()
    {
        if(top == nullptr)
        {
            cout<<"Stack Underflow"<<endl;
            exit(1);
        }
        else
        {
            Node* todel = top;
            top = top->next;
            delete todel;
        }
        size--;
    }
    int stop()
    {
        return top->data;
    }
    bool isempty()
    {
        if(top == NULL)
            return true;
        else
            return false;
    }
    int sssize()
    {
        return size;
    }
};

int main()
{
    Stack s1;
    s1.push(54);
    s1.push(76);
    s1.push(98);

    cout<<"Top element is:- "<<s1.stop()<<endl;
    cout<<"Size of stack is:- "<<s1.sssize()<<endl;
    s1.pop();

    cout<<"Top element is:- "<<s1.stop()<<endl;
    cout<<"Size of stack is:- "<<s1.sssize()<<endl;

    cout<<"Is Stack empty? "<<s1.isempty()<<endl;

    return 0;
}