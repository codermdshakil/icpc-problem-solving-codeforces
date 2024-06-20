#include <iostream>
using namespace std;

int main()
{
    long long m, n;
    
    // take input
    cin >> m >> n;

    // % 10 to find last digit
    long long m_last = m % 10;
    long long n_last = n % 10;

    // sum
    long long sum = m_last + n_last;

    // print sum
    cout << sum << endl;

    return 0;
}