#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 0:
        cout << "Zero" << endl;
        break;
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "Didn't match" << endl;
        break;
    }

    return 0;
}