/*----Written by :- Vishal Yadav----*/
/*----Date :- 24-02-24----*/

/*Program to reverse a string using stack*/

#include<bits/stdc++.h>
using namespace std;

void reverse(string& s1)
{
    stack<char> ss;
    for(int i=0 ; i<s1.size() ; i++)
    {
        ss.push(s1[i]);
    }
    string temp = "";
    while(!ss.empty())
    {
        temp.push_back(ss.top());
        ss.pop();
    }
    cout<<temp;
//     for(int i=0 ; i<s1.size() ; i++)
//     {
//         cout<<ss.top();
//         ss.pop();
//     }
}

int main()
{
    string s1 = "Hello";
    reverse(s1);
    return 0;
}