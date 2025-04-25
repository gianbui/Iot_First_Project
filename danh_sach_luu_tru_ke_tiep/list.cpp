 #include <bits/stdc++.h>
using namespace std;

#define MAX 100
// khai báo kiểu dữ liệu
struct sinhvien
{
    char masv[30];
    char hodem[30];
    char ten[30];
    char gioitinh[30];
    int namsinh;
    float diem;
};

struct List 
{
    int x;
    sinhvien m[MAX];
};

// hàm tạo một sinh viên
sinhvien tao_sv(const char * msv, const char * hd, const char * ten, const char * gt, int ns, float d)
{
    sinhvien k;
    strcpy(k.masv, msv);
    strcpy(k.hodem, hd);
    strcpy(k.ten, ten);
    strcpy(k.gioitinh, gt);
    k.namsinh = ns;
    k.diem = d;
    return k;
}

// hàm hiển thị thông tin 1 sinh viên
void show_sv(sinhvien k)
{
    cout << left << setw(10) << k.masv;
    cout << left << setw(20) << k.hodem;
    cout << left << setw(15) << k.ten;
    cout << left << setw(15) << k.gioitinh;
    cout << left << setw(15) << k.namsinh;
    cout << left << setw(10) << k.diem << endl;
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

// hàm kiểm tra danh sách đầy
int Full(List l)
{
    return l.x == MAX - 1;
}

// hàm tạo danh sách
void add_end(List & l, sinhvien k)
{
    if(!Full(l))
    {
        l.x++;
        l.m[l.x] = k;
    }
    else
    {
        cout << "Danh sach day" << endl;
    }
}

// hàm hiển thị danh sách
void display(List l)
{
    cout << left << setw(6) << "STT";
    cout << left << setw(10) << "MA SV";
    cout << left << setw(20) << "HO DEM";
    cout << left << setw(15) << "TEN";
    cout << left << setw(15) << "GIOI TINH";
    cout << left << setw(15) << "NAM SINH";
    cout << left << setw(10) << "DIEM TK" << endl;
    for (int i = 0; i <= l.x; i++)
    {
        cout << left << setw(6) << i + 1;
        show_sv(l.m[i]);
    }
    cout << endl;
}

// hàm xóa phần tử đầu tiên trong danh sách
void del_first(List & l)
{
    for (int i = 0; i <= l.x; i++)
    {
        l.m[i] = l.m[i + 1];
    }
    l.x--;
    cout << "====================== DANH SACH SINH VIEN SAU KHI XOA ======================" << endl;
    display(l);
}

// hàm xóa sinh viên ở vị trí bất kì
void del_idx(List & l, int k)
{
    if(k > 0 && k <= l.x + 1)
    {
        for (int i = k - 1; i <= l.x; i++)
        {
            l.m[i] = l.m[i + 1];
        }
        l.x--;
        cout << "====================== DANH SACH SINH VIEN SAU KHI XOA ======================" << endl;
        display(l);
    }
    else
    {
        cout << "Thao tac xoa khong thanh cong" << endl;
    }
}

// hàm chèn sinh viên
void chen(List & l, int k, sinhvien x)
{
    if(k > 0 && k <= l.x + 1 && !Full(l))
    {
        for (int i = l.x + 1; i > k - 1; i--)
        {
            l.m[i] = l.m[i - 1];
        }
        l.x++;
        l.m[k - 1] = x; 
        cout << "====================== DANH SACH SINH VIEN SAU KHI CHEN ======================" << endl;
        display(l);
    }
    else
    {
        cout << "Thao tac chen khong thanh cong" << endl;
    }
}

// hàm sắp xếp danh sách theo chiều tăng dần của tên sinh viên
void sort(List & l)
{
    for (int i = 0; i < l.x; i++)
    {
        int min_index = i;
        for (int j = i + 1; j <= l.x; j++)
        {
            if(strcmp(l.m[j].ten, l.m[min_index].ten) < 0)
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            swap(l.m[min_index], l.m[i]);
        }
    }
    cout << "====================== DANH SACH SINH VIEN KHI SAP XEP ======================" << endl;
    display(l);
}
int main()
{
    List l;
    create(l);
    add_end(l, tao_sv("1001", "Tran Van", "Thanh", "Nam", 1997, 7.5));
    add_end(l, tao_sv("1002", "Nguyen Thi", "Bich", "Nu", 1998, 7.2));
    add_end(l, tao_sv("1003", "Nguyen Van", "Giang", "Nam", 1996, 6.4));
    add_end(l, tao_sv("1004", "Bui Thi", "Hong", "Nu", 1998, 8.6));
    add_end(l, tao_sv("1005", "Duong Van", "Hung", "Nam", 1997, 6.8));

    cout << "======================== DANH SACH SINH VIEN ========================" << endl;
    display(l);

    // del_idx(l, 4);
    chen(l, 5, tao_sv("1006", "Le Thi", "Doan", "Nu", 1998, 7.6));

    sort(l);
}