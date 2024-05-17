/*
N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5, 
đúng in 1 sai in 0
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n >= 30) && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}