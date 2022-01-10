#include <iostream>

using namespace std;

int burn( float c, float d, int hours = 0, float r = 0)
{
    // to correct rounding
    r += 0.0001;

    float div = (c / d + r);

    if ((int)div > 0)
    {
        return burn((int)div, d, hours + (int)c, div - (int)div);
    }

    return hours + (int)c;
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << burn(a, b);

}