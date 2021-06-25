#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="fam",s2="ily";
    if(s1.compare(s2)==0){
        cout<<"String are equal";
    }
    cout<<s1.compare(s2)<<endl;
    return 0;
}