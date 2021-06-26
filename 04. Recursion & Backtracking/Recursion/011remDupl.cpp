#include <bits/stdc++.h>
using namespace std;

string remDupl(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = remDupl(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}

int main(){
    string s = "aaaabbbeeecdddd";
    cout<<remDupl(s)<<endl;
    return 0;
}