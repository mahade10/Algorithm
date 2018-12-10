#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1;
    ofstream file2;
    ifstream file3;
    file1.open("vowel.txt");
    file2.open("consonant.txt");
    file3.open("word.txt");
    string word;
    while(file3>>word){
        if(tolower(word[0]=='a')||tolower(word[0]=='e')
        ||tolower(word[0]=='i')||tolower(word[0]=='o')
        ||tolower(word[0]=='u'))

          file1<<word;
       else
          file2<<word;
   }

    return 0;
}


