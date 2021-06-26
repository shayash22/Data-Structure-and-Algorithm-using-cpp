// Generate substring with ASCII number 
#include <bits/stdc++.h>
using namespace std;

void subseq(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string prev=s.substr(1);
    subseq(prev,ans);
    subseq(prev,ans+ch);
    subseq(prev,ans+to_string(code));
}

int main(){
    subseq("ab",""); 
    subseq("AB",""); 
    return 0;
}