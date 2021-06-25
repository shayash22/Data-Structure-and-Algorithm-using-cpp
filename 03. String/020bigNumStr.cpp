// Form the biggest number from the numeric string 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str="3465769790808";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
    return 0;
}