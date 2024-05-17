/*
N có chữ số tận cùng là bội số của 3
*/

#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;

    if ((n % 10) % 3 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
       	cout << 0 << endl;
    }

    return 0;
}