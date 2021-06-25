#include<iostream>

using namespace std;

int facT(int n){
    if(n==1){
        return 1;
    }
    // int prev=facT(n-1);
    return n*facT(n-1);
}

int main(){
    int n; cin>>n;
    cout<<facT(n)<<endl;
    return 0;
}