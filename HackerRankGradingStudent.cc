#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<38)
        {
            arr[i]=arr[i];
        }
        else if(arr[i]%5==0)
        {
            arr[i]=arr[i];
        }
        else if( (arr[i]+2)%5==0)
        {
            arr[i]=arr[i]+2;
        }
        else if( (arr[i]+1)%5==0)
        {
            arr[i]=arr[i]+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}