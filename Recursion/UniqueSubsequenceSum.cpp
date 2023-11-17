/*----Written by :- Vishal Yadav----*/
/*----Date :- 17-11-23----*/

/*Program to print unique subsequence of an array whose sum is equal to target using Recursion*/

#include<bits/stdc++.h>
using namespace std;

void print(int index , vector<int> empty)
{
    for(auto itr : empty)
        cout<<itr<<" ";
    cout<<endl;
}

bool subseq(int index , vector<int> empty , vector<int> arr , int n , int target , int sum)
{
    if(index>=n)
    {
        if(sum == target)
        {
            print(index , empty);     //Note :- We can have a function that both prints and returns (line 49)
            return true;
        }
        return false;
    }
    empty.push_back(arr[index]);       //Here we have used the array to push elements into empty array
    sum = sum + arr[index];       //This sum variable is declared as function parameter because we have to tell the next recursive function the current sum otherwise in each copy it will sum will be 0 if you declare it inside function
    
    if(subseq(index+1 , empty ,arr , n , target , sum) == true)
    {
        return true;
    }
    sum = sum - arr[index];
    empty.pop_back();
    if(subseq(index+1 , empty , arr , n , target , sum)  == true)
    {
        return true;
    }
    return false;
}

int main()
{
    //We have to take two arrays one empty and one for pushing elements from it to empty array
    int target = 3;
    vector<int> arr = {3, 1, 2};       
    vector<int> empty;
    subseq(0 , empty , arr , 3 , target , 0);   //Now to call a function that do both returning and printing it depends on us how we want to use the function
    return 0;
}