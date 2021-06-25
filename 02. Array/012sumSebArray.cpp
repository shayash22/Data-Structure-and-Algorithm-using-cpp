// Sum of All Sub Array
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        x=0;
        for(int j=i;j<n;j++){
            x+=arr[j];
            cout<<x<<" ";
        }
    }
    cout<<endl;

    return 0;
}