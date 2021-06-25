#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str="QWERTYUIOP";
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
            
        }
        
    }
    cout<<str;
    return 0;
}