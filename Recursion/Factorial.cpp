/*----Written by :- Vishal Yadav----*/
/*----Date :- 01-11-23----*/

/*Program to calculate factorial of a number using Recursion*/

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)              //Base Case
        return 1;
    else
        return n * fact(n-1);         //Recursive Case
}

int main()
{
    int n;
    cout<<"Enter Number:- ";
    cin>>n;
    cout<<fact(n);
    return 0;
}
