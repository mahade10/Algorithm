#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue <int> s;
    int c;
    for(int i=0;i<5;i++){
        cin>>c;
        s.push(c);
    }
    cout<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

