#include <iostream>

using namespace std;

int main() {

    char c;
    bool found = false;

    while (cin >> c)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            found = true;
        }
    }

    cout << (found ? "YES" : "NO");

}