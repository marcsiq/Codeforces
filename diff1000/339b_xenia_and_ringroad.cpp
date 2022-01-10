#include <iostream>

using namespace std;

int main() {

    long long n, m, t = 0, p = 1, h;
    cin >> n >> m;

    while (m--)
    {
        cin >> h;
        t += (n + h - p) % n;
        p = h;

    }
    cout << t;
}