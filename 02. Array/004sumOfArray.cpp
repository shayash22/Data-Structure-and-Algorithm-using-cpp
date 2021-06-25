// Running Sum of Array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int total=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total+=arr[i];
    }
    cout<<total<<endl;
    
    return 0;
}