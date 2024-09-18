#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() 
{
    int age0 {99};
    bool isAlive {true};
    bool isDead {false};
    int age;
    double weight;
    int a{64};
    int b{4};
    bool c = 0;
    
    cout << "Hello World\n";
    cout << "Alive: " << isAlive << "\n";
    cout << "Dead: " << isDead << "\n";
    cout << "Age0 = " << age0 << "\n";
    cout << a * b << endl;
    cout << c << endl;

    cout << "Input age: ";
    cin >> age;
    cout << "Input weight: ";
    cin >> weight;
    cout << "Age: " << age << "\t Weight: " << weight << endl;

    return 0;
}

