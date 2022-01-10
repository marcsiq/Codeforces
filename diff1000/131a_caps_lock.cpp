#include <iostream>

using namespace std;

int main() {

    string s;
    int bitCaps = 32;

    cin >> s;

    size_t n = s.length();

    for (size_t i = 1; i < n; i++)
    {
        if (islower(s[i]))
        {
            bitCaps = 0;
        }

    }

    for (size_t i = 0; i < n; i++)
    {
        cout << (char)(bitCaps ^ s[i]);
    }

}
