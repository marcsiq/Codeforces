#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, c = 0;
    cin >> x;

    while ( x != 0 )
    {
        if (x & 1)
        {
            c++;
        }
        x >>= 1;
    }
    cout << c;
}