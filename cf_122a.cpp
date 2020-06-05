#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;
    cin >> a;
    // 4, 7, 47, 74, 444, 447, 474, 744, 477, 747, 774, 777
    cout << (a % 4 == 0 || a % 7 == 0 || a % 47 == 0 || a % 74 == 0 || a % 477 == 0 ? "YES" : "NO");
}