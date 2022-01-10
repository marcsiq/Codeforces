#include <iostream>

using namespace std;

int main() {

    int n, t, i = 0;
    cin >> n >> t;

    int* a = new int[n + 1];

    while (cin >> a[++i]);

    for (i = 1; i < t; i += a[i]);

    cout << (t == i ? "YES" : "NO");

    delete [] a;
}