#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.141592653;
    double radius;
    cin >> radius;
    double area = pi * radius * radius;

    cout << fixed << setprecision(9);
    cout << area << endl;

    return 0;
}