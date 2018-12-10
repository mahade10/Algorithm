#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   vector <string> a;

   a.push_back("ilove my country");
   a.push_back("ilove country");
   string b;
   b="love my country";
   //b=a;
   a.push_back(b);
   cout <<a.size() << endl;
   for(int i=0;i<a.size();i++)
   cout<<a[i]<<endl;
    return 0;

}
