#include<bits/stdc++.h>
using namespace std;
class HCN{
	private:
		float D;
		float R;
	public:
		void nhap();
		float DIENTICH();
		float CHUVI();
		void ve();
}; 
void HCN::ve(){
	for(int i=0;i<R;i++){
		for(int j=0;j<D;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
float HCN::DIENTICH(){
return D*R;
}
float HCN::CHUVI(){
	return 2*(D+R);
}
void HCN :: nhap(){
	cout<<"Chieu dai :";	cin>>D;
	cout<<"Chieu rong :";	cin>>R;
}
int main(){
	HCN x;
	x.nhap();
	cout<<"Chu vi cua hcn :"<<x.CHUVI()<<endl;
	cout<<"Dien tich cua hcn :"<<x.DIENTICH()<<endl;
	cout<<"ve hcn"<<endl;
	x.ve();
}
