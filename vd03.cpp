/*
 Kiểm tra n chia hết cho m
*/

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n % m == 0)
    {
        cout << n << " chia het cho " << m << endl;
    }

    if (n % m != 0)
    {
        cout << n << " khong chia het cho " << m << endl;
    }

    return 0;
}
