#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,n;
     cin>>n;
    int a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    int p=1;
    while(1){

        if(a[n]<a[n-p]){
            a[n-p+1]=a[n-p];

           for(i=1;i<=n;i++){
               cout<<a[i]<<" ";
            }
            p++;
            cout<<endl;

        }
        else{
            break;
        }

    }
    a[]
    for(i=2;i<=n;i++){
        t=a[i];
        j=i-1;
        while(a[j]>t&&j>0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
     for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}

