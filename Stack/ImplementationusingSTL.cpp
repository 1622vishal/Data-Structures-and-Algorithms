/*----Written by :- Vishal Yadav----*/
/*----Date :- 23-02-24----*/

/*Program to implement stack using C++ STL*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> ss;

    //Push operation
    ss.push(7);         //      |  6  |
    ss.push(4);         //      |  4  |         <--Stack
    ss.push(6);         //      |__7__|

    //Printing top element
    cout<<"Topmost element is:- "<<ss.top()<<endl;

    //Pop operation 
    ss.pop();
    cout<<"Topmost element is:- "<<ss.top()<<endl;

    //Size operation
    cout<<"Size of Stack is:- "<<ss.size()<<endl;

    //Empty operation
    if(ss.empty())
        cout<<"Stack is empty."<<endl;
    else
        cout<<"Stack is not empty."<<endl;

    return 0;
}