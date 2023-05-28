#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    int cls;
    char section;
    //use const for not giving warning.
    Student(int r, int s, int c, const char* n) {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }};
    Student fun(){
        char name[100]="Rahim Ullah";
        Student rahim(29, 'c', 9, "Rahim");
        return rahim;
    }
int main() {
    Student rahim=fun();

    cout << rahim.name << endl;
    cout << rahim.roll << endl;
    cout << rahim.section << endl;
    cout << rahim.cls << endl;
    return 0;
}
//rvo-return value optimization