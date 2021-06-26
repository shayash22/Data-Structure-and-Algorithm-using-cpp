// Generate all substrings of a string 
#include <bits/stdc++.h>
using namespace std;

void subseq(string s,string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main(){
    subseq("abc","");
    return 0;
}