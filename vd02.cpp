/*
 Kiểm tra n là số chẵn thì in ra "CHAN"
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Event" << endl;
    }

    if (n % 2 != 0)
    {
        cout << "Old" << endl;
    }

    return 0;
}