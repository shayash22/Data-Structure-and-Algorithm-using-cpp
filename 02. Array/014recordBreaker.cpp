// Record Breaker
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=-1;
    int count=0;
    int maxNo=INT_MIN;
    if(arr[0]>arr[1]){
        count++;
        maxNo=max(maxNo,arr[0]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>maxNo){
            maxNo=max(maxNo,arr[i]);
            count++;
        }

    }
    cout<<count<<" ";
    cout<<endl;
    return 0;
}