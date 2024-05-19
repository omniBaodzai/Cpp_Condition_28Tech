/*
Nhập tháng và năm in ra số ngày của tháng, chú ý tháng 2 của năm nhuận có 29 ngày
- Sử dụng câu lệnh switch case
*/

#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;

    switch (t)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << 31 << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << 30 << endl;
            break;
        case 2:
            if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
            {
                cout << 29 << endl;
            }
            else
            {
                cout << 28 << endl;
            }
           break;
        default:
            cout << "Du lieu nhap vao khong hop le" << endl;
    }

    return 0;
}