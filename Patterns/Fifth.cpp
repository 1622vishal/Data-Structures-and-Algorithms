/*----Written by :- Vishal Yadav----*/
/*----Date :- 20-07-24----*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int k=n-1 ; k>=i ; k--)    cout<<" ";
        for(int j=1 ; j<=2*i-1 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}