#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr1[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr1[i]<<" ";
    }
}
