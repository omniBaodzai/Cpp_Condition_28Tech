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
        cout << "Even" << endl;
    }

    if (n % 2 != 0)
    {
        cout << "Odd" << endl;
    }

    return 0;
}
