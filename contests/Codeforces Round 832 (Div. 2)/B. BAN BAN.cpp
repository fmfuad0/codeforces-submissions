#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 1 << endl << 1 << " " << 2 << endl;
        else
        {
            int x = 1, y = 3 * n;
            int op = n / 2 + n % 2;
            cout << op << endl;
            while (op--)
            {
                cout << x << " " << y << endl;
                x += 3; y -= 3;
            }
        }
    }
    return 0;
}