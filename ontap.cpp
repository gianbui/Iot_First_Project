#include<bits/stdc++.h>
#define Max 100
using namespace std;
struct Hang{
	char mah[30];
	char tenh[30];
	char dv[30];
	int  dg;
	int sl;
};
struct List{
	int count;
	Hang e[Max];
};
//khoi tao ds rong
void creat(List &L){
	L.count=-1;
}
//ktra ds co day o
int full(List L){
	return L.count==Max-1;
}
//kra ds co rong o
int empty(List L){
	return L.count==-1;
}
//bo sung ptu cuoi ds
int add(List &L,Hang x){
	if(full(L))	return 0;
	else{
		L.count++;
		L.e[L.count]=x;
		return 1;
	}
}
void Nhap(Hang &x){
	cout<<"Nhap ma hang :";				fflush(stdin);			gets(x.mah);
	if(strcmp(x.mah,"*")==0) return ;
	cout<<"Nhap ten hang:";				fflush(stdin);			gets(x.tenh);
	cout<<"Nhap don vi tinh:";			fflush(stdin);			gets(x.dv);
	cout<<"Nhap don gia:";				cin>>x.dg;
	cout<<"Nhap so luong:";				cin>>x.sl;		
}
void NhapDS(List &L){
	creat(L);
	Hang x;
	int i=1;
	do{
		cout<<"Nhap mat hang thu "<<i<<endl;
		Nhap(x);
		if(strcmp(x.mah,"*")==0)
			break ;
		if(!add(L,x)){
			return ;
		}
		i++;
	}while(1);
}
void Hienthi(List L){
	cout<<setw(5)<<"STT";
	cout<<setw(10)<<"Ma hang";
	cout<<setw(10)<<"Ten hang";
	cout<<setw(15)<<"Don vi tinh";
	cout<<setw(10)<<"Don gia";
	cout<<setw(10)<<"So luong";
	cout<<setw(13)<<"Thanh tien"<<endl;
	for(int i=0;i<=L.count;i++){
		cout<<setw(5)<<i+1;
		cout<<setw(10)<<L.e[i].mah;
		cout<<setw(10)<<L.e[i].tenh;
		cout<<setw(10)<<L.e[i].dv;
		cout<<setw(10)<<L.e[i].dg;
		cout<<setw(10)<<L.e[i].sl;
		cout<<setw(10)<<L.e[i].sl*L.e[i].dg<<endl;
	}
}
void xoa(List &L,int k){
	for(int i=k-1;i<L.count;i++){
		L.e[i]=L.e[i+1];
	}
	L.count--;
}
void chen(List &L){
	if(full(L)){
		cout<<"danh sach rong khong the chen";
		return;
	}
	int k;
	Hang x;
	cin>>k;
	cin.ignore();
	Nhap(x);
	for(int i= L.count;i>=k-1;i--){
		L.e[i+1]=L.e[i];
	}
	L.count++;
	L.e[k-1]=x;	
}
//void bubbleSort(List &L){
//	for(int i=0;i<L.count;i++){
//		for(int j=L.count;j>i;j--){
//			if((L.e[j].sl*L.e[j].dg)<(L.e[j-1].dg*L.e[j-1].sl)){
//				Hang tmp=L.e[j];
//				L.e[j]=L.e[j-1];
//				L.e[j-1]=tmp;
//			}
//		}
//	}
//}
void selectionSort(List &L){
	for(int i=0;i<L.count;i++){
		int m=i;
		for(int j=i+1;j<L.count;j++){
			if((L.e[j].dg*L.e[j].sl)<(L.e[m].dg*L.e[m].sl))
				m=j;
		}
		if(m!=i){
			Hang tmp=L.e[i];
			L.e[i]=L.e[m];
			L.e[m]=tmp;
		}
	}
}
int main(){
	List L;
	NhapDS(L);
	cout<<"---------------------DANH SACH MAT HANG-----------------"<<endl;
	Hienthi(L);
//	cout<<"---------------------DANH SACH KHI XOA HANG 1------------"<<endl;
//	xoa(L,1);
//	Hienthi(L);
//	cout<<"---------------------DANH SACH KHI CHEN VAO DAU-----------"<<endl;
//	chen(L);
//	Hienthi(L);
	cout<<"---------------------DANH SACH SAU KHI SX TANG DAN TT---------"<<endl;
//	bubbleSort(L);
	selectionSort(L);
	Hienthi(L);
}