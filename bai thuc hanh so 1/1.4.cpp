#include<bits/stdc++.h>
using namespace std;
class SACH{
	private:
		char masach[30];
		char Tensach[30];
		char nxb[30];
		int sotrang;
		int gia;
	public:
		void nhap();
		void xuat();
};
void SACH::nhap(){
		cout<<"Ma sach :";		fflush(stdin);		gets(masach);
		cout<<"Ten sach :";		fflush(stdin);		gets(Tensach);
		cout<<"Nha xuat ban :";	fflush(stdin);		gets(nxb);
		cout<<"So trang :";		cin>>sotrang;
		cout<<"Gia :";			cin>>gia;
}
void SACH::xuat(){
	cout<<"Ma sach :"<<masach<<endl;
		cout<<"Ten sach :"<<Tensach<<endl;
		cout<<"Nha xuat ban :"<<nxb<<endl;
		cout<<"So trang :"<<sotrang<<endl;
		cout<<"Gia :"<<gia<<endl;
}
int main(){
	int n;
	cout<<"So cuon sach :";			cin>>n;
	SACH x[100];
	for(int i=0;i<n;i++){
		x[i].nhap();
	}
	cout<<"===============CUON SACH============="<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}
