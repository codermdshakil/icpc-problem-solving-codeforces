#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // Calculate division result
    double divisionResult = static_cast<double>(A) / B;

    // Calculate floor, ceil, and round of divisionResult
    int floorResult = floor(divisionResult);
    int ceilResult = ceil(divisionResult);
    int roundResult = round(divisionResult);

    // Output results
    cout << "floor " << A << " / " << B << " = " << floorResult << endl;
    cout << "ceil " << A << " / " << B << " = " << ceilResult << endl;
    cout << "round " << A << " / " << B << " = " << roundResult << endl;

    return 0;
}
