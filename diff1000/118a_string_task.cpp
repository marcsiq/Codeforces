#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char a;

    while (cin >> a)
    {
        if (!strchr("AEIOUYaeiouy", a))
        {
            cout << '.' << (char)tolower(a);
        }
    }
}