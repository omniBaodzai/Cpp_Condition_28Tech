/*
Chuyển đổi in hoa thành in thường và ngược lại
- Dùng hàm tolower và toupper
*/

#include <iostream>

using namespace std;

int main()
{
    char c1 = 'A';
    char c2 = 'a';

    // In hoa thành in thường
    c1 = tolower(c1);
    cout << "Chuyen doi A thanh in thuong: " << c1 << endl;

    // In thường thành in hoa
    c2 = toupper(c2);
    cout << "Chuyen doi a thanh in hoa: " << c2 << endl;

    return 0;
}