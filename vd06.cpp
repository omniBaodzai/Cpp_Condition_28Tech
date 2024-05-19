/*
Kiểm tra n là số chẵn nếu đúng in ra "CHAN" và "28tech", sai in ra "LE" và "28tech.com.vn"
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "CHAN" << endl;
        cout << "28tech" << endl;
    }
    else
    {
        cout << "LE" << endl;
        cout << "28tech.com.vn" << endl;
    }

    return 0;
}
