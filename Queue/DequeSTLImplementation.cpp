/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-03-24----*/

/*Deque Implementation using C++ STL*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(6);

    cout<<"Front element is:- "<<dq.front()<<endl;
    cout<<"Last element is:- "<<dq.back()<<endl;

    dq.push_front(1);
    dq.push_front(2);

    cout<<"Front element is:- "<<dq.front()<<endl;
    cout<<"Last element is:- "<<dq.back()<<endl;

    cout<<"Size of deque is:- "<<dq.size()<<endl;

    dq.pop_back();
    dq.pop_front();
    cout<<"Front element is:- "<<dq.front()<<endl;
    cout<<"Last element is:- "<<dq.back()<<endl;

    cout<<"Size of deque is:- "<<dq.size()<<endl;
    // dq.shrink_to_fit();              //See output after decommenting it  dq[2] will be garbage value;
    cout<<"Element at 2 is:- "<<dq[2]<<endl;       //The element will still be present at this index after pop operation
                                                    //the new element is just overwrites the previous element
    cout<<"Is deque empty? "<<dq.empty()<<endl;


    return 0;
}