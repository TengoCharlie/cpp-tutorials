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
    // ==========================================================
    // // Rectangle pattern
    // ********************
    // ********************
    // int row, col;
    // cin >> row >> col;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // ==========================================================
    // // Hollow Rectangle Pattern
    // ***************************
    // ***************************
    // int row, col;
    // cin >> row >> col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row || j == 1 || j == col)
    //         {

    //             cout << "* ";
    //         }

    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // ==========================================================
    // // Inverted Half Pyramid
    // ************************
    // ************************
    // int n; // No. of max start in a line
    // cin >> n;

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // ==========================================================
    // // Half Pyramid After 180* rotation
    // ***********************************
    // ***********************************
    // int n; // No. of max start in a line
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //             cout << "* ";
    //     }
    //     cout << endl;
    // }
    // ==========================================================
    // // Half Pyramid Using Numbers
    // *****************************
    // *****************************
    // int n; // No. of max start in a line
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    // ==========================================================
    // Floyd's Triangle
    // ****************
    // ****************
    // int n; // No. of max start in a line
    // cin >> n;
    // int val = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << val << " ";
    //         val++;
    //     }
    //     cout << endl;
    // }

    // =======================================================
    // Butterfly Pattern
    // *****************
    // *****************
    int n; // No. of max start in a line
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
