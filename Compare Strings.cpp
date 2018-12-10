#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,i,d,j,test=0;
    string a,b;
    cin>>n>>q;
    int sum[n],sum1[n];

    cin>>a;
    cin>>b;
    for(i=0;i<a.size();i++){
           sum[i] = (a[i]-'0');
        }
    while(q--){
        cin>>d;
        test=0;
        for(i=0;i<d;i++){
            b[i]='1';
        }
        for(i=0;i<b.size();i++){
           sum1[i] = (b[i]-'0');
        }
        for(i=0;i<n;i++){
           if(sum[i]>sum1[i]){
                test=1;
            cout<<"NO"<<endl;
            break;
           }
           else{
                continue;
           }
        }
        if(test==0){
            cout<<"YES"<<endl;
        }

    }
}
