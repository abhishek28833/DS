#include<bits/stdc++.h>
using namespace std;

int main(){
    int start,end,i,mid,n,target;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    sort(a,a+n);
    start=0;
    end=n-1;
    mid=(start/2)+(end/2);
    bool ans;
    while(start<=end){
        if(a[mid]==target){
        ans = true;
        break;
        }
        else if(a[mid]>target)
        end=mid-1;
        else if(a[mid]<target)
        start=mid+1;
        mid=(start/2)+(end/2);
    }
    if(ans)
    cout<<"present";
    else
    cout<<"not present";
}
