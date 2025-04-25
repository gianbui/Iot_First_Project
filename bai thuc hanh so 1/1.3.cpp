#include<bits/stdc++.h>
using namespace std;
class HANG{
	private:
		char mah[30];
		char tenh[30];
		int dongia;
		int sl;
	public:
		void nhap();
		void xuat();
};
void HANG::nhap(){
	cout<<"Ma hang :";			fflush(stdin);		gets(mah);
	cout<<"Ten hang :";			fflush(stdin);		gets(tenh);
	cout<<"Don gia :";			cin>>dongia;
	cout<<"So luong :";			cin>>sl;
}
void HANG::xuat(){
	cout<<"Ma hang :"<<mah<<endl;
	cout<<"Ten hang :"<<tenh<<endl;
	cout<<"Don gia :"<<dongia<<endl;
	cout<<"So luong :"<<sl<<endl;
	cout<<"Thanh tien :"<<sl*dongia<<endl;
}
int main(){
	int n;
	cout<<"So mat hang : ";	cin>>n;
	HANG x[100];
	for(int i=0;i<n;i++){
		x[i].nhap();
	}
	cout<<"===================MAT HANG==================="<<endl;;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}
