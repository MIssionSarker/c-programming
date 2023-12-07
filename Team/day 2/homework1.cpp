#include <bits/stdc++.h>
using namespace std;
int main(){
          int a,b,c;
          cin>>a>>b>>c;
          if(a>b){
            cout<<"A is greater"<<endl;
            cout<<"B is Youngest"<<endl;
          }
          else if(b>c){
            cout<<"B is greater"<<endl;
            cout<<"C is Youngest"<<endl;
          }
          else{
            cout<<"C is greater"<<endl;
            cout<<"A is Youngest"<<endl;
          }
return 0;
}