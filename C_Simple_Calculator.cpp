#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    // take input
    cin >> x >> y;

    // operations
    int sum = x + y;
    int mul = x * y;
    int sub = x - y;
    
    // print output
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << sub << endl;

    return 0;
}