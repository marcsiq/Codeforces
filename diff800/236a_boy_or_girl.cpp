#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    map<char, int> m;

    for (int i = 0; i < (int)s.length(); i++) {
        m[s[i]]++;
    }

    cout << (m.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");

}