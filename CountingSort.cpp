#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j, k=0,n;


   while(cin>>n){
        int a[n];
        int b[n];
        int c[n];
        if(n==0){
        break;
    }

    b[n]={0};
    for(i =0;i<n;i++){
        cin>>a[i];
    }
    for(i =0;i<n;i++){
      if(a[i]>k){
        k=a[i];
      }
    }
    for(i=0;i<=k;i++){
        c[i]=0;
    }

    for(i=0;i<n;i++){
        c[a[i]]+=1;
    }
    for(i=1;i<=k;i++){
        c[i]=c[i]+c[i-1];
    }
    for(i=0;i<n;i++){
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }
    for(i=1;i<=n;i++){
        cout<<b[i];
        if(i==n){
            break;
        }
        cout<<" ";
    }
    cout<<endl;
  }

    return 0;

}

