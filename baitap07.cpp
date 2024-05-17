/*
N có phải là số có 2 chữ số và có chữ tận cùng là một số nguyên tố
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int du = n % 10;
    
    if ((n >=  10 && n <= 99) && (du == 2 || du == 3 || du == 5 || du == 7))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}