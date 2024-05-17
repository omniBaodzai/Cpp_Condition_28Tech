/*
Nhập 3 cạnh của tam giác là số nguyên, nếu 3 cạnh của tam giác đều in 1, cân in 2, vuông in 3, 
thường in 4. Giả sử 3 cạnh đã là 3 cạnh của tam giác hợp lệ
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Tam giac deu" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Tam giac can" << endl;
    }
    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        cout << "Tam giac vuong" << endl;
    }
    else
    {
        cout << "Tam giac thuong" << endl;
    }

    return 0;
}