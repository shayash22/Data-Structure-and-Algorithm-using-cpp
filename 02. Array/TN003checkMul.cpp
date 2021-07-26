#include <bits/stdc++.h>
using namespace std;
 
void smaller(int a){
    int j=0;
    int smaller[10000];
    if(a<10){
        cout<<a+10<<endl;
        return;
    }
    for(int i=9;i>1;i--){
        while(a%i==0){
            a=a/i;
            smaller[j]=i;
            j++;
        }
    }
    if(a>10){
        cout<<"Not Posiblle"<<endl;
        return;
    }
    for(int i=j-1;i>=0;i--){
        cout<<smaller[i];
    }
}


int main(){
    int n;
    cin>>n;
    smaller(n); 
    return 0;
}