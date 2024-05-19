/*
Kiểm tra chữ số 
*/

#include <iostream>

using namespace std;

int main()
{
    char c = '5';

    //Cách 1:
    if (c >= '0' && c <= '9')
    {
        cout << "YES 1" << endl;
    }
    else
    {
        cout << "NO 1" << endl;
    }

    //Cách 2:
    if (c >= 48 && c <= 57)
    {
        cout << "YES 2" << endl;
    }
    else 
    {
        cout << "NO 2" << endl;
    }

    return 0;
}