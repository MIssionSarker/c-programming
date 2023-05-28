#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    char s;
    cin>>a>>s>>b;
      
    bool comparisonresult;
    if(s=='<'){
        comparisonresult=(a<b);
        }
        else if(s=='>'){
            comparisonresult=(a>b);
        }
        else if(s=='='){
            comparisonresult=(a==b);
        }


        if(comparisonresult){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }

    return 0;
}