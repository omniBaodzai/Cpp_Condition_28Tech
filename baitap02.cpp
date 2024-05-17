/*
N có phải là số vừa chia hết cho 3 vừa chia hết cho 5, đúng in 1 sai in 0
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n % 3 == 0) && (n % 5 == 0))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}