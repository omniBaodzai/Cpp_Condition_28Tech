/*
N có phải là số chẵn, đúng in 1 sai in 0
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if (n % 2 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}