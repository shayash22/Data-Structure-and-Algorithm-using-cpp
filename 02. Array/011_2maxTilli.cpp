#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int maxNo=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        cout<<maxNo<<" ";

    }
    cout<<endl;

    return 0;
}