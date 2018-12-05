// in phan tu nho nhat sau cung den cuoi day

#include <iostream>
using namespace std;

main(){
	int n, i, a[100];
	do{
		cout<<"nhap N: ";
		cin>>n;
	}while(n<=0 || n>=100);

	for(i=0; i<n; i++){
		cout<<"Nhap phan tu: ";
		cin>>a[i];
	}

	//2b
	int min=a[n-1], vitrimin=n-1;
	//tim phan tu nho nhat(lon nhat) va vi tri cua no
	for(i=n-1; i>0; i--){
		if(a[i]<min){
			min=a[i];
			vitrimin=i;
		}
	}
	//in day
	for(vitrimin; vitrimin<n;vitrimin++)
			cout<<a[vitrimin]<<'\t';
}
