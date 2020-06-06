#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, a, p = 0, total = 0, curr = 0;
    cin >> n;

    while (cin >> a)
    {
        if (a >= p)
        {
            total = max(total, ++curr);
        }
        else
        {
            curr = 1;
        }
        p = a;
    }

    cout << total;

}