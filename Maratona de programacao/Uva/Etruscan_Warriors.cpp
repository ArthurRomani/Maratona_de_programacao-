/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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