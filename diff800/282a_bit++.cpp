#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x = 0;
    string s;
    cin >> n;

    while (n--)
    {
        cin >> s;
        x += s[1] == '+' ? 1 : -1;
    }
    cout << x;
}