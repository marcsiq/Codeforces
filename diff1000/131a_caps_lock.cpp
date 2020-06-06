#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    int bitCaps = 32;

    cin >> s;

    int n = s.length();

    for (int i = 1; i < n; i++)
    {
        if (islower(s[i]))
        {
            bitCaps = 0;
        }

    }

    for (int i = 0; i < n; i++)
    {
        cout << (char)(bitCaps ^ s[i]);
    }

}
