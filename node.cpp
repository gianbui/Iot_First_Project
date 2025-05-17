#include<bits/stdc++.h>
using namespace std;
struct Hang{
	char mah[30];
	char tenh[30];
	char dv[30];
	int dg;
	int sl;
};
struct Node{
	Hang infor;
	Node*next;
};
typedef Node *TRO;
void creat(TRO &L){
	L=NULL;
}
int empty(TRO L){
	return L==NULL;
}
void Nhap(Hang &x){
	cout<<"Nhap ma hang:";				fflush(stdin);				gets(x.mah);
	if(strcmp(x.mah,"*")==0)
		return ;
	cout<<"Nhap ten hang:";				fflush(stdin);				gets(x.tenh);
	cout<<"Nhap don vi tinh:";			fflush(stdin);				gets(x.dv);
	cout<<"Nhap don gia:";				cin>>x.dg;
	cout<<"Nhap so luong:";				cin>>x.sl;
}
void NhapDS(TRO &L){
	creat(L);
	Hang x;
	TRO Q,P;
	int i=1;
	do{
		cout<<"Nhap mat hang thu"<<i<<endl;
		Nhap(x);
		if(strcmp(x.mah,"*")==0)
			return ;
		P=new(Node);
		P->infor=x;
		P->next=NULL;
		if(L==NULL){
			L=P;
		}
		else
			Q->next=P;
			Q=P;
			i++;
	}while(1);
}
void Hienthi(TRO L){
	if(L==NULL){
		cout<<"danh sach rong";
		return ;
	}
	cout<<setw(5)<<"STT";
	cout<<setw(10)<<"Ma hang";
	cout<<setw(10)<<"Ten hang";
	cout<<setw(10)<<"Don vi tinh";
	cout<<setw(10)<<"Don gia";
	cout<<setw(10)<<"So luong";
	cout<<setw(10)<<"Thanh tien"<<endl;
	TRO Q=L;
	int i=0;
	while(Q!=NULL){
		Hang x = Q->infor;
		cout<<setw(5)<<i+1;
		cout<<setw(10)<<x.mah;
		cout<<setw(10)<<x.tenh;
		cout<<setw(10)<<x.dv;
		cout<<setw(10)<<x.dg;
		cout<<setw(10)<<x.sl;
		cout<<setw(10)<<x.dg*x.sl<<endl;
		Q=Q->next;
		i++;
	}
}
void xoadau(TRO &L){
	TRO Q=L;
	if(Q==NULL){
		cout<<"DS rong khong xoa dc";
		return ;
	}
	L=L->next;
	delete Q;
}
void xoapt(TRO &L){
	TRO Q=L;
	TRO M;
	int d=1;
	while(Q!=NULL && d<3){
		Q=Q->next;
		d++;
	}	
	M=Q->next;
	Q->next =M->next;
	delete M;
}
void chen3(TRO &L){
	TRO Q,M;
	Q=L;
	int d=1;
	while(Q!=NULL && d<3){
		M=Q;
		Q=Q->next;
		d++;
	}
	Hang x;
	Nhap(x);
	TRO P=new(Node);
	P->infor=x;
	P->next=M->next;
	M->next=P;
}
void chen1(TRO &L){
	TRO M=L;
	TRO P=new(Node);
	Hang x;
	Nhap(x);
	P->infor=x;
	P->next=M;
	L=P;
}
int main(){
	TRO L;
	Hang x;
	NhapDS(L);
	cout<<"--------------------DANH SACH MAT HANG-------------------"<<endl;
	Hienthi(L);
	cout<<"--------------------DANH SACH SAU KHI XOA PTU DAU----------"<<endl;
	xoadau(L);
	Hienthi(L);
}