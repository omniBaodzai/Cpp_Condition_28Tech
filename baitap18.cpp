/*
Chuyển đổi in hoa, in thường 
*/

#include <iostream>

using namespace std;

int main()
{
    //Chuyển đổi in hoa thành in thường
    char c1 = 'D'; // D = 68
    c1 += 32;  // c = 68 + 32 = 100 (d)

    cout << c1 << endl; // d
    // Nếu bạn không in ra dòng 12, 14 mà in ra dòng 15 thì kq là: 100 chứ không phải kí tự d
    //cout << c1 + 32 << endl; 

    //Chuyển đổi in thường thành in hoa
    char c2 = 'd'; // d = 100
    c2 -= 32; // 100 - 32 = 68 (D)

    cout << c2 << endl;

    return 0;
}