#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    switch (3) // Do switch đã lấy giá trị là 3, nên nhập số nào cũng in ra "Le Thi Hien"
    {
        case 1:
            cout << "Huynh Le Bao" << endl;
            break;
        case 2: 
            cout << "Huynh Trung Hieu" << endl;
            break;
        case 3:
            cout << "Le Thi Hien" << endl;
            break;
        case 4:
            cout << "Huynh Tri Tin" << endl;
            break;
        default:
            cout << "Du lieu ban nhap vao khong hop le" << endl;
    }

    return 0;
}