#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int32_t main()
{

    // This part is to beautify the input and output of the code
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}
