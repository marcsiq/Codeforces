#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x, y, v;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            cin >> v;
            if (v == 1)
            {
                cout << abs(x - 2) + abs(y - 2);
                break;
            }
        }
    }

}