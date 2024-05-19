/*
Chú ý : Các câu lệnh bên trong case sẽ được kết thúc bởi câu lệnh break. 
Nếu không có câu lệnh break thì khi code trong nhánh nào được thực hiện, 
switch case sẽ không kết thúc ngay như else if mà sẽ thực hiện luôn các câu lệnh trong các rẽ nhánh bên dưới.
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    switch(n)
    {
        case 1:
            cout << "Chu nhat" << endl;

        case 2: 
            cout << "Thu hai" << endl;
        case 3: 
            cout << "Thu ba" << endl;
        case 4:
            cout << "Thu tu" << endl;
        default:
            cout << "Du lieu nhap vao khong hop le" << endl;             
    }

    return 0;
}