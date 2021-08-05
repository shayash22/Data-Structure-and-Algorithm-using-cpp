#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,td=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            td++;
        }
    }
    cout<<td<<endl; 
    return 0;
}