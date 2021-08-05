#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,x,rem=0,count=0;
    cin>>a>>x;
    while(a>0){
        rem=a%10;
        if(rem==x){
            count++;
        }
        a/=10;
    }
    cout<<count<<endl;
    return 0;
}