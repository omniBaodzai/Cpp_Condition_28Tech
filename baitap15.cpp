/*
Kiểm tra kí tự in hoa
*/

#include <iostream>

using namespace std;

int main()
{
    char c = 'E';

    //Cách 1:
    if (c >= 'A' && c <= 'Z')
    {
        cout << "YES 1" << endl;
    }
    else
    {
        cout << "NO 1" << endl;
    }

    //Cách 2:
    if (c >= 65 && c <= 90)
    {
        cout << "YES 2" << endl;
    }
    else
    {
        cout << "NO 2" << endl;
    }

    return 0;
}