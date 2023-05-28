#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int s, int c,const char* n) {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};
int main() {
    Student* rahim =new Student(29, 'c', 9, "Rahim");
    //old method
    cout << (*rahim).name << endl;
    cout << (*rahim).roll << endl;
    cout << (*rahim).section << endl;
    cout << (*rahim).cls << endl;

    //shortcut upay 
    //arrow sign
    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->section << endl;
    cout << rahim->cls << endl;

    //delete an object
    delete rahim;
    return 0;
}
