#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    int max1=a[0];
    for (int i = 0 ; i < n; i++)
    {
        max1=max(a[i],max1);
    }
    cout<<max1;
}