#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int month,year;
    cin>>month>>year;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
        cout<<"Number of days is 31"<<endl;
    }
    else if(month==4 || month==6 || month==9 || month==11){
        cout<<"Number of days is 30"<<endl;
    }
    else{
        if(year%4==0){
            cout<<"Number of days is 29"<<endl;
        }
        else{
            cout<<"Number of days is 28"<<endl;
        }
    }    
    return 0;
}