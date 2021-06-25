#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                cout<<"Element is found:";
                cout<<i<<","<<j<<endl;
                flag=true;
            }
        }
        
    }
    if(flag){
        cout<<"Element is not found."<<endl;
    }
    return 0;
}