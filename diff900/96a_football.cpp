#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string t;
    cin >> t;

    cout << ((t.find("0000000") != string::npos || t.find("1111111") != string::npos) ? "YES" : "NO");
}