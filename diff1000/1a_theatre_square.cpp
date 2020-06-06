#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    double m, n, a;

    cin >> m >> n >> a;

    cout << (long long) (ceil(m / a) * ceil(n / a));

}