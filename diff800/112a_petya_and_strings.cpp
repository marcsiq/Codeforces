#include <bits/stdc++.h>


using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int i, r = 0;
    int ca, cb;
    string a, b;
    cin >> a >> b;

    for (i = 0; i < (int)a.length(); i++)
    {
        ca = tolower(a[i]);
        cb = tolower(b[i]);

        if (ca < cb)
        {
            r = -1;
            break;
        }
        else if (ca > cb)
        {
            r = 1;
            break;
        }
    }
    cout << r;
}