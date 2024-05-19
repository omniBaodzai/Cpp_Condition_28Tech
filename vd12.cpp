/*
Nhập vào toán tử +, -, *, /, % và in ra kết quả tương ứng với 2 số a, b
- Nếu bạn nhập toán tử trước thì câu lệnh default sẽ được thực thi
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >>b;

    char c;
    cin >> c;

    switch(c)
    {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '%':
            cout << a % b << endl;
            break;
        default:
            cout << "Du lieu nhap vao khong hop le" << endl;
    }

    return 0;
}