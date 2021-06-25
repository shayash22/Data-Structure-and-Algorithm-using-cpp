// Kids with the greatest number of candies
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the total no of kids:";
    cin>>n;
    int arr[n];
    int greatest=INT_MIN;
    for(int i=0;i<n;i++){
        cout<<"Enter the total no's of candies of no "<<i+1<<" kid:"<<endl;
        cin>>arr[i];
        greatest=max(greatest,arr[i]);             

    }
    cout<<"Kids with the greatest no of candies is "<<greatest<<endl;
    

    return 0;
}