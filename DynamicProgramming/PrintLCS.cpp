/*----Written by :- Vishal Yadav----*/
/*----Date :- 07-04-24----*/

/*Program to print Longest Common Subsequence*/

#include<bits/stdc++.h>
using namespace std;

string lcs(int i , int j , string& s , string& t)
{
    if(i == 0 || j == 0) return ""; // base case
    if(s[i-1] == t[j-1])
    {
        return lcs(i-1 , j-1 , s , t) + s[i-1];
    }
    else
    {
        string x = lcs(i-1 , j, s , t);
        string y = lcs(i , j-1 , s , t);
        return (x.length() > y.length()) ? x : y;
    }
}

int main()
{
    string s = "adebc";
    string t = "dcadb";
    cout<<lcs(5 , 5 , s , t);
    return 0;
}