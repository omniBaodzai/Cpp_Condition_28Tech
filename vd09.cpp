/*
Kiểm tra n nằm trong đoạn [20, 50] và chia hết cho ít nhất 1 trong 4 số 2, 3, 5, 7
nếu đúng in YES, ngược lại in NO
- Sử dụng if else lồng nhau
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if (n >= 20 && n <= 50)
    {
        if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO1" << endl;
        }
    }
    else
    {
        cout << "NO2" << endl;
    }

    return 0;
}
