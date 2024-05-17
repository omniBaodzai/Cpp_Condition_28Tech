/*
N có phải là số chia hết 3 nhưng không chia hết cho 7, đúng in 1 sai in 0
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n % 3 == 0) && (n % 7 != 0))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}