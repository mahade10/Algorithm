#include<bits/stdc++.h>
using namespace std;

void temporary(char p[],int tem[],int n);

void kmp(char t[],char p[]){
    int m = strlen(t);
    int n = strlen(p);
    int count=0;
    int tem[n];
    temporary( p,tem, n);

    int i=0;
    int j=0;
    while(i<m){
        if(t[i]==p[j]){
            i++;
            j++;
        }
            if(j==n){
                count++;
                j =tem[j-1];
            }
        else if(i<m && t[i]!= p[j]){

            if(j!=0){
                j = tem[j-1];
            }
            else{
                i++;
            }
        }
    }
    cout<<count<<endl;
}
void temporary(char p[],int tem[],int n){
    int len =0,i=1;
     tem[0]=0;

    while(i<n){
        if(p[i]==p[len]){
            len++;
            tem[i]=len;
            i++;
        }
        else{

            if(len!=0){
                len = tem[len-1];
            }
            else{
                tem[i]=0;
                i++;
            }
        }
    }
}

int main(){
    int t,i;
    char text[1000000],pat[1000000];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>text>>pat;
       cout<<"Case "<<i<<": ";
        kmp(text,pat);
    }
}

