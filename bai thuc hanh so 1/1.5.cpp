#include<bits/stdc++.h>
using namespace std;
class array{
	private:
		int *a;
		int n;
	public:
		void nhap();
		void sapxep();
		void xuat();
};
void array::nhap(){
	cout<<"n=";				cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void array::xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void array::sapxep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int main(){
	array x;
	x.nhap();
	x.sapxep();
	x.xuat();
}
