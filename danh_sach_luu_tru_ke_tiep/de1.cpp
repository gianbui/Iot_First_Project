#include <bits/stdc++.h>
using namespace std;

#define MAX 100
// khai báo cấu trúc dữ liệu của danh sách
struct monhoc
{
    char mamon[30];
    char tenmon[30];
    int hoctrinh;
    float diem;
};
struct List
{
    int x;
    monhoc m[MAX];
};

// hàm khởi tạo 1 môn học
monhoc tao_mon(const char * mm, const char * tm, int ht, float d)
{
    monhoc k;
    strcpy(k.mamon, mm);
    strcpy(k.tenmon,tm);
    k.hoctrinh = ht;
    k.diem = d;
    return k;
}

// hàm nhập thông tin một môn học
void nhapmh(monhoc & k)
{
    cout << "Nhap ma mon hoc: "; fflush(stdin); gets(k.mamon);
    cout << "Nhap ten mon hoc: "; fflush(stdin); gets(k.tenmon);
    cout << "Nhap so hoc trinh: "; cin >> k.hoctrinh;
    cout << "Nhap diem so: "; cin >> k.diem;
}

// hàm hiển thị thông tin 1 môn học
void xuatmh(monhoc k)
{
    cout << left << setw(30) << k.mamon;
    cout << left << setw(30) << k.tenmon;
    cout << left << setw(30) << k.hoctrinh;
    cout << left << setw(30) << k.diem << endl;
}

// hàm tạo danh sách
void create(List & l)
{
    l.x = -1;
}

// hàm kiểm tra danh sách rỗng
int Empty(List l)
{
    return l.x == -1;
}

// hàm kiểm tra danh sách đầy
int Full(List l)
{
    return l.x == MAX - 1;
}

// hàm nhập mới danh sách
void nhap_list(List & l)
{
    for (int i = 0; i < 3; i++)
    {
        monhoc k;
        cout << "Nhap thong tin mon hoc thu " << i + 1 << endl;
        nhapmh(k);
        l.m[i] = k;
        l.x++;
        cout << endl;
    }
}

// hàm hiển thị danh sách
void display(List l)
{
    if (Empty(l))
    {
        cout << "Danh sach rong" << endl;
        return;
    }
    cout << left << setw(30) << "MA MON HOC";
    cout << left << setw(30) << "TEN MON HOC";
    cout << left << setw(30) << "SO HOC TRINH";
    cout << left << setw(30) << "DIEM SO" << endl;
    for(int i = 0; i <= l.x; i++)
    {
        xuatmh(l.m[i]);
    }
}

// hàm thêm một môn vào danh sách
void add_list(List & l, monhoc k)
{
    if(Full(l))
    {
        cout << "Danh sach day, khong the them" << endl;
        return;
    }
    else
    {
        l.x++;
        l.m[l.x] = k;
    }
}

// hàm thêm một phần tử vào cuối danh sách
void add_end(List & l, monhoc k)
{
    if (Full(l))
    {
        cout << "Danh sach day, khong the them" << endl;
        return;
    }

    l.x++;
    l.m[l.x] = k;
    cout << "Danh sach sau khi them: " << endl;
    display(l);
}

// hàm xóa phần tử thứ 2 trong danh sách
void del_list(List & l, int k)
{
    if (k < 1 || k > l.x + 1)
    {
        cout << "Vi tri xoa khong hop le" << endl;
        return;
    }
    for(int i = k - 1; i <= l.x; i++)
    {
        l.m[i] = l.m[i + 1];
    }
    l.x--;
    cout << "Danh sach sau khi xoa: " << endl;
    display(l);
}

int main ()
{
    List l;
    create(l);
    // add_list(l, tao_mon("m1", "toan", 3, 6));
    // add_list(l, tao_mon("m2", "van", 3, 6));
    // add_list(l, tao_mon("m3", "anh", 3, 5));
    // add_list(l, tao_mon("m4", "ly", 3, 6));
    // add_list(l, tao_mon("m5", "hoa", 3, 7));

    // add_end(l, tao_mon("m6", "sinh", 6, 10));
    
    nhap_list(l);
    display(l);
    cout << endl;
    del_list(l, 2);

}