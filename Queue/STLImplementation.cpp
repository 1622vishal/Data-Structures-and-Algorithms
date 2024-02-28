/*----Written by :- Vishal Yadav----*/
/*----Date :- 28-02-24----*/

/*Program to implement Queue using C++ STL*/
/*Queue follows FIFO(First In First Out) property*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> qq;

    //Pushing some elements using push function in C++ STL
    qq.push(23);
    qq.push(65);
    qq.push(83);
    qq.push(20);
    qq.push(49);

    cout<<"Front element is:- "<<qq.front()<<endl;       //front() returns the first element
    cout<<"Last element is:- "<<qq.back()<<endl;         //back() returns the last element

    //Popping element using pop function(element will be popped from front)
    qq.pop();
    cout<<"Front element is:- "<<qq.front()<<endl;
    cout<<"Last element is:- "<<qq.back()<<endl;
    cout<<"Size of Queue is:- "<<qq.size()<<endl;
    qq.pop();
    cout<<"Front element is:- "<<qq.front()<<endl;
    cout<<"Last element is:- "<<qq.back()<<endl;

    //Size of queue
    cout<<"Size of Queue is:- "<<qq.size()<<endl;
    
    //Checking if Queue is empty or not
    cout<<"Is Queue Empty? "<<boolalpha<<qq.empty()<<endl;

    return 0;
}