#include <iostream>

using namespace std;

int burn( float c, float d, int hours = 0, float r = 0)
{
    // to correct rounding
    r += 0.0001f;

    float div = (c / d + r);

    if (static_cast<int>(div) > 0)
    {
        return burn((float)static_cast<int>(div), d, hours + static_cast<int>(c), div - static_cast<int>(div));
    }

    return hours + static_cast<int>(c);
}

int main() {

    float a, b;
    cin >> a >> b;

    cout << burn(a, b);

}