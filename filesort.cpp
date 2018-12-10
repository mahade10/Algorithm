#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,i,j,k;

    ofstream asc("Ascending.txt");
    ofstream desc("Descending.txt");

    int a[100];
    int b[100];


    ifstream in ("rr.txt");
    i=0;
     while(in>>a[i]){
      b[i]=a[i];
        i++;
     }
     in.close();

     for(j=0;j<100;j++){
        for(k=j+1;k<100;k++){
            if(b[j]>b[k]){
                m=b[k];
                b[k]=b[j];
                b[j]=m;
            }
        }
     }
     for(j=0;j<100;j++){
        asc<<b[j]<<endl;
     }

    for(j=99;j>=0;j--){
        desc<<b[j]<<endl;
     }

    return 0;
}

