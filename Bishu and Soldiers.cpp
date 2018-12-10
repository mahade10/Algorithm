#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t,i,j,b;
    cin>>n;
    int a[n],sum=0,c=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    while(m--){
        cin>>b;
        sum=0;
        c=0;
        for(i=0;i<n;i++){
            if(a[i]<=b){
                c++;
                sum=sum+a[i];
            }
        }
        cout<<c<<" "<<sum<<endl;
    }
    return 0;
}
