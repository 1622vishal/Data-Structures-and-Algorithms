/*----Written by :- Vishal Yadav----*/
/*----Date :- 08-03-24----*/

/*Program to compute Fibinacci series using Dynamic Programming*/

#include<bits/stdc++.h>
using namespace std;

int Fib(vector<int>& dp , int n)
{
    if(n<=1)    return n;
    if(dp[n] != -1)     return dp[n];       //3rd Step
    return dp[n] = Fib(dp , n-1) + Fib(dp , n-2);     //2nd Step

}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1 , -1);         //1st Step
    cout<<"Nth Fibonacci number is:- "<<Fib(dp , n);
    return 0;
}