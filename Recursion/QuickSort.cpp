/*----Written by :- Vishal Yadav----*/
/*----Date :- 23-11-23----*/

/*Program to perform Quick Sort using Recursion*/

#include<bits/stdc++.h>
using namespace std;

int findpIndex(vector<int>& arr ,int low , int high)
{
    int pivot=arr[low];
    int i = low;
    int j = high;
    while(i < j)        //Finally got the point and the point is this loop will help in swapping all the elements 
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        } 
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)      //There will occur a case when we don't have to swap the elements i.e.,when j<i
        {
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j;
}

void quicksort(vector<int>& arr , int low , int high)
{
    if(low<high)
    {
        int partitionIndex = findpIndex(arr , low , high);
        quicksort(arr , low , partitionIndex-1);
        quicksort(arr , partitionIndex+1 , high);
    }
}

int main()
{
    vector<int> arr = {5,7,2,6,1,9,2,3,6,4,5,8,2};
    int low = 0;
    int high = arr.size()-1;
    cout<<"Unsorted array is:- ";
    for(auto a : arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    quicksort(arr , low , high);

    cout<<"Sorted array is:- ";
    for(auto a : arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}