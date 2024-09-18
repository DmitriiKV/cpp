#include <iostream>
using namespace std;

int main() 
{
    double a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    if (a < 0 and b < 0) {
        if (a != -10 and b != -10) {
            a = b = 0;
        }
        else {
            a = b = 1;
        }
    }
    else {
        if (a < b) {
            a *= 1000;
        }
        else if (a > b) {
            b *= 1000;
        }
    };
    cout << "a = " << a << "\t" << "b = " << b << endl;
}