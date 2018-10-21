#include <iostream>
using namespace std;
float gttd(float a){
	if(a<0)
		return a*(-1);
	return a;	
}

main(){
	float a[30], tong=0, trungbinh, tongam=0, tongduong=0, tongchan=0, tongle=0;
	int n, i;
	do{
	   cout<<"nhap n:";
	   cin>>n;
	} while(n>30 || n<1);
	for(i=0; i<n; i++){
		cout<<"nhap phan tu cho mang: ";
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		tong+=a[i];
		if(a[i]<0)
			tongam+=a[i];
		else
			tongduong+=a[i];
		if(i%2==0)
			tongchan+=a[i];
		else
			tongle+=a[i];
	}
	float tb = tong/n*1.0;
	cout<<"tong day: "<<tong<<endl;
	cout<<"tong am: "<<tongam<<endl;
	cout<<"tong duong: "<<tongduong<<endl;
	cout<<"tong chan: "<<tongchan<<endl;
	cout<<"tong le: "<<tongle<<endl;
	cout<<"trung binh: "<<tb<<endl;
	
	//tim phan tu gan so trung binh
	float hieu = gttd(tb-a[0]);
	float phantu=a[0];
	for(i=1; i<n; i++)
		if(gttd(tb-a[i]) < hieu){
			hieu = gttd(tb-a[i]);
			phantu = a[i];
		}
	cout<<"phan tu gan so trung binh: "<<phantu;
}

