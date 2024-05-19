/*
Kiểm tra chữ cái
*/

#include <iostream>

using namespace std;

int main()
{
    char c = 'G';

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
}