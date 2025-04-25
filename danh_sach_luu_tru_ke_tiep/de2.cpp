
#include <bits/stdc++.h>
using namespace std;

#define MAX 100

// khai báo cấu trúc dữ liệu của danh sách
struct canbo
{
    char macb[30];
    char hoten[30];
    int tuoi;
    long luong;
};

struct List
{
    int x;
    canbo m[MAX];
};

// xây dựng các hàm thực hiện
// hàm nhập 1 cán bộ
void nhapcb(canbo & a)
{
    cout << "Nhap ma can bo: "; fflush(stdin); gets(a.macb);
    cout << "Nhap ho ten: "; fflush(stdin); gets(a.hoten);
    cout << "Nhap tuoi doi: "; cin >> a.tuoi;
    cout << "Nhap luong: "; cin >> a.luong;
}

// hàm xuất cán bộ
void xuatcb(canbo a)
{
    cout << left << setw(30) << a.macb;
    cout << left << setw(30) << a.hoten;
    cout << left << setw(30) << a.tuoi;
    cout << left << setw(30) << a.luong << endl;
}
// hàm khởi tạo danh sách
void create(List & l)
{
    l.x = -1;
}

// hàm kiểm tra danh sách rỗng
int Empty(List l)
{
    return l.x == -1;
}

// hàm nhập danh sách
void nhapds(List & l)
{
    int n;
    do
    {
        cout << "Nhap so luong can bo: "; cin >> n;
        if(n < 0)
            cout << "Nhap lai!" << endl;
    } while(n < 0);
    cout << endl;
    create(l);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin can bo thu " << i + 1 << endl;
        nhapcb(l.m[i]);
        l.x++;
        cout << endl;
    }
}

// hàm hiển thị danh sách cán bộ
void display(List l)
{
    cout << left << setw(30) << "MA CAN BO";
    cout << left << setw(30) << "HO TEN";
    cout << left << setw(30) << "TUOI";
    cout << left << setw(30) << "LUONG" << endl;
    for (int i = 0; i <= l.x; i++)
    {
        xuatcb(l.m[i]);
    }
}

// hàm xóa cán bộ có mã 456
void del(List & l, char * ma)
{
    int dem = 0;
    for (int i = 0; i <= l.x; i++)
    {
        if(strcmp(l.m[i].macb, ma) == 0)
        {
            for (int j = i; j < l.x; j++)
            {
                l.m[j] = l.m[j + 1];
            }
            dem++;
            l.x--;
        }
    }
    if(dem > 0)
    {
        cout << "Danh sach can bo sau khi xoa can bo co ma " << ma << endl;
        display(l);
    }
    else
    {
        cout << "Trong danh sach khong co can bo nao co ma " << ma << endl;
    }
}

// hàm hiển thị thông tin những cán bộ có tuổi đời nhỏ hơn 40
void age_40(List l)
{
    int dem = 0;
    for (int i = 0; i <= l.x; i++)
    {
        if(l.m[i].tuoi < 40)
        {
            dem++;
        }
    }
    if(dem > 0)
    {
        cout << "\nDanh sach nhung can bo co tuoi doi nho hon 40: " << endl;
        cout << left << setw(30) << "MA CAN BO";
        cout << left << setw(30) << "HO TEN";
        cout << left << setw(30) << "TUOI";
        cout << left << setw(30) << "LUONG" << endl;
        for (int i = 0; i <= l.x; i++)
        {
            if(l.m[i].tuoi < 40)
            {
                xuatcb(l.m[i]);
            }
        }
    }
    else
    {
        cout << "Trong danh sach khong co can bo nao co tuoi doi nho hon 40" << endl;
    }
}

int main ()
{
    List l;
    nhapds(l);
    del(l, "456");
    age_40(l);
}

