#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    cin >> a >> b >> c;

    int mx = 0;

    mx = max(max(a * b * c, a + b + c), max(a * (b + c), (a + b) * c));

    cout << mx;

}