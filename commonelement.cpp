#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,o,a[100],b[100],c[100],j,i,temp=0;
    cin>>m;
    for( i=0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;
    for( i=0;i<n;i++){
        cin>>b[i];
    }
    cin>>o;
    for( i=0;i<o;i++){
        cin>>c[i];
    }
    for( i=m,j=0;i<m+n;i++){
        a[i]=b[j];
        ++j;
    }
    for(int i=m+n,j=0;i<m+n+o;i++){
        a[i]=c[j];
        ++j;
    }
    sort(a,a+m+n+o-2);
    for(i=0;i<m+n+o-2;i++){
        if(i==0&&a[i]==a[i+1]){
            cout<<a[i]<<" ";
            temp=a[i];
        }
        else if(i>0){
            if(a[i]==a[i-1]||a[i]==a[i-1]){
            if(temp!=a[i]){
            cout<<a[i]<<" ";
            }
            temp=a[i];
            }
        }
    }
}