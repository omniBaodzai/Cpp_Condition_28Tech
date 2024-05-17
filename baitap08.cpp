/*
 N có phải là số không vượt quá 100 và chia hết cho 23?
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n <= 100) && (n % 23 == 0))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}