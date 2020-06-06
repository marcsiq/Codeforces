#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b, c, n, p = 0;
	cin >> n ;

	while (n--)
	{
		cin >> a >> b >> c;

		p += a + b + c > 1 ? 1 : 0;
	}
	cout << p;
}