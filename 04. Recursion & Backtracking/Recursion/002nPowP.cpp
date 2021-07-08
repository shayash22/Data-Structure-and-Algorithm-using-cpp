#include<iostream>

using namespace std;


int powN(int n,int p){
    
    if(p==0){
        return 1;
    }

    int prev=powN(n,p-1);
    return n * prev;

}

int main(){
    int n,p; 
    cin>>n>>p;
    cout<<powN(n,p)<<endl;
    return 0;
} 