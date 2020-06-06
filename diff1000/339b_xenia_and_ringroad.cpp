#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n, m, t = 0, p = 1, h;
    cin >> n >> m;

    while (m--)
    {
        cin >> h;
        t += (n + h - p) % n;
        p = h;

    }
    cout << t;
}