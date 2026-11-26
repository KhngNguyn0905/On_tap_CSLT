/*
Câu 2. (2,0 điểm)
Cho mảng hai chiều a chứa m dòng n cột các số nguyên; trong đó vị trí dòng, cột bắt đầu từ 0.
Hãy viết chương trình thực hiện các công việc sau:
a. Tính tổng các phần tử của mảng a.
b. Tính tổng các phần tử trên từng dòng của mảng a.
c. Tính tổng các phần tử trên từng cột của mảng a.
Ví dụ:
m=3, n=4
14   7  16  16
12  21   9   8
11   4  13  18
kết quả câu a: 149
kết quả câu b: 53 50 46
kết quả câu c: 37 32 38 42
*/
#include <iostream>
using namespace std;

const int MAX = 100;

void nhap(int &m, int &n, int a[][MAX]);
void xuat(int m, int n, int a[][MAX]);
int tongtoanbo(int m, int n, int a[][MAX]);
void tongtdong(int m, int n, int a[][MAX]);
void tongtcot(int m, int n, int a[][MAX]);

int main()
{
    int m, n, a[MAX][MAX];
    nhap(m, n, a);
    xuat(m, n, a);
    cout << "Ket qua cau a: " << tongtoanbo(m, n, a) << endl;
    cout << "Ket qua cau b: ";
    tongtdong(m, n, a);
    cout << "Ket qua cau c: ";
    tongtcot(m, n, a);
    return 0;
}

void nhap(int &m, int &n, int a[][MAX])
{
    cout << "Nhap so dong m va so cot n: ";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void xuat(int m, int n, int a[][MAX])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t"; // "\t":
        cout << endl;
    }
}

int tongtoanbo(int m, int n, int a[][MAX])
{
    int tong = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tong += a[i][j];
    return tong;
}

void tongtdong(int m, int n, int a[][MAX])
{
    for (int i = 0; i < m; i++)
    {
        int tong = 0;
        for (int j = 0; j < n; j++)
            tong += a[i][j];
        cout << tong << " ";
    }
    cout << endl;
}

void tongtcot(int m, int n, int a[][MAX])
{
    for (int j = 0; j < n; j++)
    {
        int tong = 0;
        for (int i = 0; i < m; i++)
            tong += a[i][j];
        cout << tong << " ";
    }
    cout << endl;
}