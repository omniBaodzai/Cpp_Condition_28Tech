/*
Kiểm tra kí tự in thường 
*/

#include <iostream>

using namespace std;

int main()
{
    char c = 'd';

    //Cách 1:
    if (c >= 'a' && c <= 'z')
    {
        cout << "YES 1" << endl;
    }
    else
    {
        cout << "NO 1" << endl;
    }

    //Cách 2:
    if (c >= 97 && c <= 122)
    {
        cout << "YES 2" << endl;
    }
    else
    {
        cout << "NO 2" << endl;
    }

    return 0;
}