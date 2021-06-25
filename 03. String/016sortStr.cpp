#include<iostream>
#include<algorithm>
// WE use algorithm  for sorting
#include<string>
using namespace std;

int main(){
    string s1="qwertyuiop";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}