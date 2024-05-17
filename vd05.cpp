/*
- Trong C++ các giá trị khác 0 được coi là đúng nên bạn có thể sử dụng nó 
để làm điều kiện cho if. 
- Nếu số mà bạn truyền vào làm điều kiện cho if khác 0 
thì code trong if sẽ thực thi và ngược lại.
*/

#include <iostream>

using namespace std;

int main()
{
    int n = 28, m = 0;
    
    if (n)
    {
        cout << "Cau lenh 18 se duoc thuc thi" << endl;
    }

    if (m)
    {
        cout << "Cau lenh 23 khong duoc thuc thi" << endl;
        cout << "Thoat ra khoi cau lenh if" << endl;
    }

    cout << "Cau lenh 27 se duoc thuc thi" << endl;

    return 0;
}