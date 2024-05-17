/*
 Kiểm tra n là một trong 4 số 2, 3, 5, 7 thì in ra YES
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 2 || n == 3 || n == 5 || n == 7)
    {
        cout << "YES" << endl;
    }

    return 0;
}