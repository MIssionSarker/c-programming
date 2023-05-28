#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello Mission sarkar i am mission saker";
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
    
    return 0;
}