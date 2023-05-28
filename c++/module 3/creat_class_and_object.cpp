#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    char name[100];
    int roll;
    int cls;
    char section;
};
int main(){
    Student rahim;
    rahim.roll=1;
    rahim.cls=9;
    rahim.section='c';
    char nm[100]="Rahim";
    strcpy(rahim.name,nm);

    Student karim;
    karim.roll=2;
    karim.cls=9;
    karim.section='c';
    char nm2[100]="karim";
    strcpy(karim.name,nm2);

    cout<<rahim.section;
    return 0;

}