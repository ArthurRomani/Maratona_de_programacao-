#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int x, n, p, i, total = 0;

    cin >> x >> n;

    for(i = 0; i < n; ++i)
    {
        cin >>p;

        total += (x - p);
    }

    total += x;

    cout <<total << endl;

    return 0;
}