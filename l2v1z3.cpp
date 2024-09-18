#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int m;
    double f;
    cout << "Введите M: ";
    cin >> m;
    switch (m) {
        case 1:
        case 2:
        f = log(fabs(m + m * m)) + sqrt(14);
        cout << "f = " << f << endl;
        break;

        case 3:
        f = (m + 3) / log(m);
        cout << "f = " << f << endl;
        break;

        case 4:
        case 7:
        f = pow(m, 3) + 2 * (m * m + 1);
        cout << "f = " << f << endl;
        break;

        case 5:
        f = 744 - m * m * pow(sin(m), 2);
        cout << "f = " << f << endl;
        break;

        case 6:
        f = log(fabs(1 + sqrt(m)));
        cout << "f = " << f << endl;
        break;

        default:
        cout << "Число " << m << " не входит в диапазон [1; 7]\n";
    }
   
}