/*----Written by :- Vishal Yadav----*/
/*----Date :- 11-11-23----*/

/*Program to print all the subsequences of an array using Recursion*/

#include<bits/stdc++.h>
using namespace std;

void print(int index , vector<int> empty)
{
    for(auto itr : empty)
        cout<<itr<<" ";
    cout<<endl;
}

void subseq(int index , vector<int> empty , vector<int> arr , int n)
{
    if(index>=n)
    {
        print(index , empty);
        return;
    }
    empty.push_back(arr[index]);       //Here we have used the array to push elements into empty array
    subseq(index+1 , empty ,arr , n);
    empty.pop_back();
    subseq(index+1 , empty , arr , n);
}

int main()
{
    //We have to take two arrays one empty and one for pushing elements from it to empty array
    vector<int> arr = {3, 1, 2};       
    vector<int> empty;
    subseq(0 , empty , arr , 3);
    return 0;
}