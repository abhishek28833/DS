#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100],b[100],c[100];
    int i,n,t=0,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>c[k];
    }
    sort(a,a+n);
    for(i=0,k=0;i<=n-1;i++){
        if(i>0&&a[i]!=a[i+1]&&a[i]!=a[i-1]){
            cout<<b[k];
            ++k;
            break;
        }
        else if (i==0&&a[i]!=a[i+1]){
            cout<<b[k];
            ++k;
            break;
        }
        else if(i==n-1&&a[i]!=a[i-1]){
            cout<<b[k];
            ++k;
            break;
        }
    }
    for(i=0;i<n)
}