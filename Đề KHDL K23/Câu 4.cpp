/*
Cho chuỗi s chứa các ký tự chữ cái và ký tự khoảng trắng; giả thiết đầu chuỗi s và cuối chuỗi s không có ký tự khoảng trắng, giữa các từ của chuỗi s có đúng một ký tự khoảng trắng.
Hãy viết chương trình thực hiện các công việc sau:
a. Đếm số lượng ký tự mỗi từ.
b. Tách một từ bên phải của chuỗi.
Ví dụ:
Chuỗi s là "The Python programming language is easy to learn and deploy applications"
kết quả câu a: 3  6  11  8  2  4  2  5  3  6  12
kết quả câu b: applications
*/
#include <iostream>
#include <cstring>
using namespace std;
int demsotu(char *c);
void demkytu(char *c);
char *tachtubenphai(char *c);
int main()
{
    char c[1000];
    cout << "Nhap chuoi s: ";
    cin.getline(c, 1000);
    cout << "Số từ có trong chuỗi là: " << demsotu(c) << endl;
    cout << "Số kí tự mỗi từ: ";
    demkytu(c);
    cout << "Từ đầu tiên bên phải là ";
    cout << tachtubenphai(c) << endl;
    return 0;
}
int demsotu(char *c)
{
    int dem = 1;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == ' ')
            dem++;
    }
    return dem;
}
void demkytu(char *c)
{
    int n = strlen(c);
    int dem = 0;
    for (int i = 0; i <= n; i++) // chú ý <= n để xử lý luôn từ cuối cùng tại '\0'
    {
        if (c[i] != ' ' && c[i] != '\0')
            dem++;
        else
        {
            cout << dem << " ";
            dem = 0;
        }
    }
    cout << endl;
}
char *tachtubenphai(char *c)
{
    return strrchr(c, ' ') + 1;
}