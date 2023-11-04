/*----Written by :- Vishal Yadav----*/
/*----Date :- 04-11-23----*/

/*Program to check if a string is Palindrome or not using Recursion*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i , string& pal)
{
    if(i >= pal.size()/2)
        return true;
    if(pal[i]!=pal[pal.size()-i-1])
        return false;
    return palindrome(i+1 , pal);
}

int main()
{
    string s = "madam";
    cout<<std::boolalpha<<palindrome(0 , s);
    return 0;
}