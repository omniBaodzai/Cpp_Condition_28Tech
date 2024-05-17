/*
N không thuộc đoạn [10, 20]?
*/

#include <iostream>

using namespace std;

int main ()
{
    int n; cin >> n;

    if (n < 10 || n > 20)
    {
        cout << 1 << endl;
    }
    else 
    {
        cout << 0 << endl;
    }

    return 0;
}
