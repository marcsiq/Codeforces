#include <iostream>
#include <algorithm>

using namespace std;


typedef struct
{
    int strength;
    int bonus;
} dragon;

int sortDragon(dragon a, dragon b)
{
    return a.strength < b.strength;
}


int main() {

    int s, n;
    cin >> s >> n;

    dragon* d = new dragon[n];

    for (int i = 0; i < n; i++)
    {
        cin >> d[i].strength >> d[i].bonus;
    }

    sort(d, d + n, sortDragon);

    for (int i = 0 ; i < n ; i++)
    {
        if (s <= d[i].strength)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s += d[i].bonus;
        }
    }
    cout << "YES";

    delete [] d;
}