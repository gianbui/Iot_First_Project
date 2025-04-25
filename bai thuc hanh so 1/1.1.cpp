#include<bits/stdc++.h>
using namespace std;
class SINHVIEN{
	private:
		char masv[15];
		char Hoten[30];
		int tuoi;
		float diem;
	public:
		void nhap();
		void xuat();
};
void SINHVIEN::nhap(){
	cout<<"Ma sinh vien :";			fflush(stdin);			gets(masv);
	cout<<"Ho ten :";				fflush(stdin);			gets(Hoten);
	cout<<"Tuoi :";					cin>>tuoi;
	cout<<"Diem :";					cin>>diem;
}
void SINHVIEN::xuat(){
	cout<<"Ma sinh vien :"<<masv<<endl;
	cout<<"Ho ten :"<<Hoten<<endl;
	cout<<"Tuoi :"<<tuoi<<endl;
	cout<<"Diem :"<<diem<<endl;
}
int main(){
	SINHVIEN a;
	SINHVIEN b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
}
