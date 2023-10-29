/*----Written by :- Vishal Yadav----*/
/*----Date :- 29-10-23----*/

/*Program to calculate sum of N Natural numbers using Recursion*/

#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)              //Base Case
        return 0;
    else
        return n + sum(n-1);         //Recursive Case
}

int main()
{
    int n;
    cout<<"Enter Number:- ";
    cin>>n;
    cout<<sum(n);
    return 0;
}
