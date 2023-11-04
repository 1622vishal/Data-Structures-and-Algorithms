/*----Written by :- Vishal Yadav----*/
/*----Date :- 04-11-23----*/

/*Program to reverse an array using Recursion*/

#include<iostream>
using namespace std;

void reverse(int i , int arr[] , int n)
{
    if(i>=(n/2))
        return;
    swap(arr[i] , arr[n-i-1]);
    reverse(i+1 , arr , n);
}

int main()
{
    int n;
    cout<<"Enter the size of the array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array:- ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    reverse(0 ,arr , n);
    cout<<"Reversed array is:- ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}