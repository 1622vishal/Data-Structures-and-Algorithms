/*----Written by :- Vishal Yadav----*/
/*----Date :- 09-11-23----*/

/*Program to check calculate Nth Fibonacci term using Recursion*/

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
        return n;

    /*To understand the return line
    let say last = fibonacci(n-1)
    secondlast = fibonacci(n-2)
    so these calls will be done and then after getting answer 
    return last + secondlast*/

    return fibonacci(n-1) + fibonacci(n-2);   
}

int main()
{
    int n;
    cout<<"Enter the Fibonacci term:- ";
    cin>>n;
    cout<<"Nth term is:- "<<fibonacci(n);
    return 0;
}

