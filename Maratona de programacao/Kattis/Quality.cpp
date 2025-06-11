#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main() {
    
    int N, i;
    double q, y, total;

    cin >> N;

    total = 0.0;

    for (i = 0; i < N; ++i) 
    {
        cin >> q >> y;
        total += q * y;
    }

    cout << fixed << setprecision(3) << total << endl;

    return 0;
}
