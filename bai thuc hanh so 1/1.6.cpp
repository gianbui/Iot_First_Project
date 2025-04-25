#include<bits/stdc++.h>
using namespace std;
class array{
	private:
		float *a;
		int n;
	public:
		void nhap();
		float lon();
		float nho();
		void xuat();
};
void array::nhap(){
	cout<<"n =";		cin>>n;
	a=new float[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
float array::lon(){
	float max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
	
}
float array::nho(){
	float min =a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
		
	}
	return min;
}
void array::xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	array x;
	x.nhap();
	cout<<"Max = "<<x.lon()<<" "<<"Min = "<<x.nho();
	
}
