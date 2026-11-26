/*
Câu 3. (2,0 điểm)
Cho dãy n hình chữ nhật R_0, R_1, ..., R_{n-1};
trong đó mỗi hình chữ nhật biết chiều dài và chiều rộng là các số nguyên dương.
Cấu trúc mỗi hình chữ nhật được định nghĩa: struct rectangle{int length; int width;};
Hãy viết chương trình thực hiện các công việc sau:
a. Nhập n, nhập chiều dài và chiều rộng của mỗi hình chữ nhật R_i với i=0..n-1.
b. Tính tổng diện tích của n hình chữ nhật trên.
Ví dụ:
n=7
8   9
6   4
12  5
18  12
10  5
3   2
11  4
kết quả câu b: 472
*/
#include <iostream>
using namespace std;

const int MAX = 100;

struct rectangle
{
    int length;
    int width;
};

void nhaphcn(int &n, rectangle a[]);
int dtich(rectangle t);
int tongdt(int n, rectangle a[]);

int main()
{
    int n;
    rectangle a[MAX];
    nhaphcn(n, a);
    cout << "Ket qua cau b: " << tongdt(n, a) << endl;
    return 0;
}

void nhaphcn(int &n, rectangle a[])
{
    cout << "Nhap so luong hinh chu nhat n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap chieu dai va chieu rong hinh thu " << i << ": ";
        cin >> a[i].length >> a[i].width;
    }
}

int dtich(rectangle t)
{
    return t.length * t.width;
}

int tongdt(int n, rectangle a[])
{
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += dtich(a[i]);
    return tong;
}