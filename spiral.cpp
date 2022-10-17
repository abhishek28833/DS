#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;
    int a[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int k=0;
    int p=0;
    while(p<=n&&k<=m){
        for(j=k;j<m-1;j++){
            cout<<a[k][j]<<" ";
        }
        for(j=k;j<n-1;j++){
            cout<<a[j][m-1]<<" ";
        }
        for(j=m-1;j>p;j--){
            cout<<a[n-1][j]<<" ";
        }
        for(j=n-1;j>k;j--){
            cout<<a[j][p-1]<<" ";
        }
        ++k;
        ++p;
        --m;
        --n;
    }
}