/*----Written by :- Vishal Yadav----*/
/*----Date :- 11-11-23----*/

/*Program to print all the subsequences of an array whose sum is equal to something using Recursion*/

#include<bits/stdc++.h>
using namespace std;

void print(int index , vector<int> empty)
{
    for(auto itr : empty)
        cout<<itr<<" ";
    cout<<endl;
}

void subseq(int index , vector<int> empty , vector<int> arr , int n , int target , int sum)
{
    if(index>=n)
    {
        if(sum == target)
        {
            print(index , empty);
        }
        return;
    }
    empty.push_back(arr[index]);       //Here we have used the array to push elements into empty array
    sum = sum + arr[index];       //This sum variable is declared as function parameter because we have to tell the next recursive function the current sum otherwise in each copy it will sum will be 0 if you declare it inside function
    
    subseq(index+1 , empty ,arr , n , target , sum);
    sum = sum - arr[index];
    empty.pop_back();
    subseq(index+1 , empty , arr , n , target , sum);
}

int main()
{
    //We have to take two arrays one empty and one for pushing elements from it to empty array
    int target = 3;
    vector<int> arr = {3, 1, 2};       
    vector<int> empty;
    subseq(0 , empty , arr , 3 , target , 0);
    return 0;
}