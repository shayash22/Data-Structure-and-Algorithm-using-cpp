// Check if an array is sort or not 
#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    
    if(n==1) return true;
    bool restarr=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarr);
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=6;
    cout<<sorted(a,n)<<endl;
    return 0;
}