/*
Chú ý : 
- Trong lập trình C++, char được sử dụng để lưu ký tự tuy nhiên nó cũng thể dùng để
lưu số nguyên.
- Khi tham gia vào các phép toán số học hay sử dụng kiểu char như một số nguyên 
thì khi đó mã ASCII của kí tự đó sẽ được sử dụng.
*/

/*
 In ra kiểu kí tự char với đặc tả số nguyên, bạn sẽ thu được mã ASCII của kí tự đó
*/

#include <iostream>

using namespace std;

int main()
{
    char c1 = 'A', c2 = 'a', c3 = '0';
    
    cout << "c1: " << (int)c1 << endl;
    cout << "c2: " << (int)c2 << endl;
    cout << "c3: " << (int)c3 << endl;

    char c4 = 'B';

    cout << c4 + 32 << endl;
    cout << (char)(c4 + 32) << endl;

    return 0;
}