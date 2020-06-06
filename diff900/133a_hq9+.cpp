#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char c;
    bool found = false;

    while (cin >> c)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            found = true;
        }
    }

    cout << (found ? "YES" : "NO");

}