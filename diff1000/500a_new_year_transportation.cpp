#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, t, i = 0;
    cin >> n >> t;

    int a[n + 1];

    while (cin >> a[++i]);

    for (i = 1; i < t; i += a[i]);

    cout << (t == i ? "YES" : "NO");


}