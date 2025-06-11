#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long result = n;
        result *= 567;
        result /= 9;
        result += 7492;
        result *= 235;
        result /= 47;
        result -= 498;


        int tens_digit = abs((result / 10) % 10);

        cout << tens_digit << endl;
    }

    return 0;
}