#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    cin.ignore();//if this dont work we will use getchar();
    string s;
    //cin>>s;
    //cin.getline(s,100)
    getline(cin,s);//it will not count the enter
    cout<<s<<endl;
    return 0;
}