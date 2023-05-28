#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    int min1=a[0];
    for (int i = 0; i < 3; i++)
    {
        min1=min(a[i],min1);
    }
    int max1=a[0];
    for (int i = 0; i < 3; i++)
    {
        max1=max(a[i],max1);
    }
    cout<<min1 <<" ";
    cout<<max1;
}