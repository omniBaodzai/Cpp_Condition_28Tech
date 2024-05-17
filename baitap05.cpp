/*
N là số lớn hơn 30 và nhỏ hơn 50, đúng in 1 sai in 0
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n > 30) && (n < 50))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}