#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    
    // take input
    cin >> m >> n;

    // % 10 to find last digit
    int m_last = m % 10;
    int n_last = n % 10;

    // sum
    int sum = m_last + n_last;

    // print sum
    cout << sum << endl;

    return 0;
}