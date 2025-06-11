#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
       int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll k = (-1 + sqrt(1 + 8.0 * n)) / 2;
        cout << k << endl;
    }
    return 0;
}
