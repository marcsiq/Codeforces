#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int mx = 0;

    mx = max(max(a * b * c, a + b + c), max(a * (b + c), (a + b) * c));

    cout << mx;

}