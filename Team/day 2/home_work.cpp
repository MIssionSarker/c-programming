#include <bits/stdc++.h>
using namespace std;
int main(){
          int a,b;
          cin>>a>>b;
          if(a>0 && b>0){
            cout<<"1st Ordinate";
          }
          else if(a<0 && b>0){
            cout<<"2nd Ordinate";
          }
          else if(a<0 && b<0){
            cout<<"3rd Ordinate";
          }
          else{
            cout<<"4th Ordinate";
          }
return 0;
}