#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s="Hello World";

    cout<<s[0]<<endl; // will print the first latter**We will use this
    cout<<s.front()<<endl;//will print the first latter
    cout<<s.at(0)<<endl;//will print any things
    cout<<s[s.size()-1]<<endl;//will print the last latter
    cout<<s.back()<<endl;//will print last latter
    return 0;
}
