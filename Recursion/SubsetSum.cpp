/*----Written by :- Vishal Yadav----*/
/*----Date :- 25-11-23----*/

/*Program to print the sum of all subsets in sorted order using Recursion*/

#include<bits/stdc++.h>
using namespace std;

void findSum(int index, vector<int>& arr, vector<int>& temp, int sum)
{
    if(index==arr.size()) 
    {
        temp.push_back(sum);
        return;
    }
    sum = sum + arr[index];
    findSum(index+1, arr, temp, sum);
    sum = sum - arr[index];
    findSum(index+1, arr, temp, sum);
}

int main()
{
    vector<int> arr = {5,1,3};
    vector<int> temp;
    int sum=0;
    findSum(0, arr, temp, sum);
    sort(temp.begin() , temp.end());
    for(auto itr : temp)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}