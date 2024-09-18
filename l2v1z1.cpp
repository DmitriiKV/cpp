#include <iostream>
using namespace std;

int main() 
{
    double a, y;
    cout << "Введите a: ";
    cin >> a;
    if (a < 0) {
        y = -1 * a;
    }
    else if (a > 2) {
        y = -4;
    }
    else if (a = 0) {
        y = 0;
    }
    else {
        y = - a * a;
    };
    cout << y << endl;
}