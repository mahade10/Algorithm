#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,n,;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=2;i<=n;i++){
        t=a[i];
        j=i-1;
        while(a[j]>t&&j>0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
     int r=0;
     for(i=1;i<=n;i++){
        if(a[i]%2==0){
            r=r+a[i];
            cout<<a[i]<<" ";
        }
    }
    cout<<r<<" ";
    int re=0;
   for(i=1;i<=n;i++){
        if(a[i]%2!=0){
            re=re+a[i];
            cout<<a[i]<<" ";
        }
    }
    cout<<re;
    return 0;
}


