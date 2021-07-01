#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while(row_start<=row_end || col_start<=col_end){
        // For start row
        for(int col=col_start; col<=col_end;col++){
            cout<<ar[row_start][col]<<" ";
        }
        row_start++;

        // For end col
        for(int row=row_start; row<=row_end; row++){
            cout<<ar[row][col_end]<<" ";
        }
        col_end--;

        // For end row
        for(int col=col_end;col>=col_start;col--){
            cout<<ar[row_end][col]<<" ";
        }
        row_end--;

        // For start Col
        for(int row=row_end;row>=row_start;row--){
            cout<<ar[row][col_start]<<" ";
        }
        col_start++;



    }


    return 0;
}