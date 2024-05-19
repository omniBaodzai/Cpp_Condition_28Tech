/*
Sử dụng kiểu char với phép toán số học
*/

#include <iostream>

using namespace std;

int main()
{
    char c = 'A'; // A = 65
    int n = c + 10; // 65 + 10 = 75

    cout << n << endl; //75
    cout << (char)n << endl; // 75 = K

    c++; // 65 + 1 = 66 (B)
    
    cout << c << endl; //B
    cout << (int)c << endl; // B = 66

    return 0;
}