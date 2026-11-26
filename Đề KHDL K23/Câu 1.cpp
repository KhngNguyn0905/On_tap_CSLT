/*
Câu 1. (2,0 điểm)
a. Cho một số nguyên dương n, hãy viết hàm tính tổng các chữ số của n.
Ví dụ n=2025 thì hàm trả về giá trị 9.
b. Cho số nguyên dương n, hãy viết hàm kiểm tra xem n có phải là số nguyên tố hay không ?
Nếu n là số nguyên tố thì hàm trả về giá trị 1, nếu n không phải là số nguyên tố thì hàm trả về giá trị 0.

*/
#include <iostream>
using namespace std;
int tongcacchuso(int n);
int xetngto(int n);
int main()
{
    int n;
    cout << "Nhập giá trị cho n: ";
    cin >> n;
    cout << "Kết quả câu a " << tongcacchuso(n) << endl;
    cout << "Kết quả câu b " << xetngto(n) << endl;
    return 0;
}
int tongcacchuso(int n)
{
    int tong = 0;
    while (n > 0)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
int xetngto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}