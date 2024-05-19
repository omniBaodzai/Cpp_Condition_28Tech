/*
Kiểm tra nếu n là năm nhuận in ra YES, ngược lại in ra NO
- Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 và không chia chết cho 100
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
