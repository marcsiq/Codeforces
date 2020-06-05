#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x, y, z;
    int cx = 0, cy = 0, cz = 0;

    cin >> n;
    while (n--)
    {
        cin >> x >> y >> z;
        cx += x;
        cy += y;
        cz += z;
    }

    cout << ( cx || cy || cz ? "NO" : "YES");
}