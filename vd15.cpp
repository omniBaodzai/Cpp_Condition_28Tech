/*
 Kiểm tra chữ in hoa và in thường
 - Dùng hàm isupper() và islower
*/

#include <iostream>

using namespace std;

int main()
{
    char c1 = 'A';
    char c2 = 'a';

    // In hoa: isupper()
    if (isupper(c1))
    {
        cout << "YES 1" << endl;
    }
    else
    {
        cout << "NO 1" << endl;
    }

    // In thường: islower()
    if (islower(c2))
    {
        cout << "YES 2" << endl;
    } 
    else
    {
        cout << "NO 2" << endl;
    }

    return 0;
}