/*----Written by :- Vishal Yadav----*/
/*----Date :- 02-11-23----*/

/*Program to print N Natural numbers using Backtracking concept(kind of)*/

#include<iostream>
using namespace std;

int printnum(int i , int n)
{
    if(n==0)
        return 0;
    printnum(i+1 , n-1);
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    printnum(1 , n);
    return 0;
}