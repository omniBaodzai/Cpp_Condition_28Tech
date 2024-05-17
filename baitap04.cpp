/*
N có phải là số chia hết cho 3 hoặc 7, đúng in "28tech" và "laptrinhC++", 
sai in "28tech.com.vn" và "Java"
*/

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if ((n % 3 == 0) || (n % 7 == 0))
    {
        cout << "28tech" << endl;
        cout << "laptrinhC++" << endl;
    }
    else
    {
        cout << "28tech.com.vn" << endl;
        cout << "java" << endl;
    }

    return 0;
}