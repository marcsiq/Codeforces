#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t, i = 0;
    cin >> n >> t;

    int a[n + 1];

    while (cin >> a[++i]);

    for (i = 1; i < t; i += a[i]);

    cout << (t == i ? "YES" : "NO");


}