#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello Myself";
    cout<<s.size()<<endl;//string size 
    cout<<s.max_size()<<endl;//Max string size
    cout<<s.capacity()<<endl;//string capacity = max string size

    string a="hello";
    a.clear(); // clear any string;
    cout<<a.size()<<endl; //this clear will make the string 0 capacity

    string b="hello";
    (s.empty()==true) ? cout<<"empty" : cout<<"not empty"<<endl;

    string c="Hello World";
    c.resize(5);
    cout<<c;
    
    return 0;
}