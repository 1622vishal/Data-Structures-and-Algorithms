/*----Written by :- Vishal Yadav----*/
/*----Date :- 23-02-24----*/

/*Implementing Stack using Array(It is implemented with the help of class)*/

#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int* arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;        //this keyword tells which identifier belong to class and which one is parameter
                                  // or you can just name them different such as size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(top < size-1)
            arr[++top] = element;
        else
            cout<<"Stack Overflow"<<endl;
    }
    void pop()
    {
        if(top != -1)
            top--;
        else   
            cout<<"Stack Underflow"<<endl;
    }
    int stop()
    {
        return arr[top];
    }
    bool isempty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    int ssize()
    {
        return top+1;
    }
};

int main()
{
    Stack s1(6);
    s1.push(43);
    s1.push(65);
    s1.push(29);

    cout<<"Top of stack is:- "<<s1.stop()<<endl;

    cout<<"Current size of stack:-"<<s1.ssize()<<endl;

    s1.pop();
    cout<<"Cuurent size of stack is:-"<<s1.ssize()<<endl;
    cout<<"Top of stack:-"<<s1.stop()<<endl;

    cout<<"Is Stack Empty? "<<boolalpha<<s1.isempty()<<endl;
    
    return 0;
}