/*----Written by :- Vishal Yadav----*/
/*----Date :- 17-11-23----*/

/*Program to count subsequence of an array whose sum is equal to target using Recursion*/

#include<bits/stdc++.h>
using namespace std;



int subseq(int index , vector<int> arr , int n , int target , int sum , int count)
{
    if(index>=n)
    {
        if(sum == target)
        {
           count++;
            return count;
        }
        return count;
    }
        
    sum = sum + arr[index];       //This sum variable is declared as function parameter because we have to tell the next recursive function the current sum otherwise in each copy it will sum will be 0 if you declare it inside function
    
    count = subseq(index+1 , arr , n , target , sum , count);    //We have to take the value in count variable only , or else next call will be made using count=0 (in line 27)
    sum = sum - arr[index];
    count = subseq(index+1 , arr , n , target , sum , count);
    
    return count;
}

int main()
{
    //We have to take two arrays one empty and one for pushing elements from it to empty array
    int target = 3;
    vector<int> arr = {3, 1, 2};       
    vector<int> empty;
    cout<<subseq(0 , arr , 3 , target , 0 , 0);
    return 0;
}

/*This is my understanding , for another way watch Takeuforward's video*/