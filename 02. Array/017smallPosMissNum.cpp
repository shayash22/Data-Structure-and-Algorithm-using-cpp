#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(check[a[i]]>=0){
            check[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
    cout<<endl;
    return 0;
}