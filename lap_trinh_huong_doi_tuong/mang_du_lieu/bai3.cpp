#include <iostream>
using namespace std;

main(){
	float a[30], temp;
	int n, i, j;
	do{
	   cout<<"nhap n: ";
	   cin>>n;
	} while(n>30 || n<1);
	for(i=0; i<n; i++){
		cout<<"nhap phan tu cho mang: ";
		cin>>a[i];
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"mang giam dan: "<<endl;
	for(i=0; i<n; i++)
		cout<<a[i]<<"\t";
	cout<<"\nmang tang dan: "<<endl;
	for(i=n-1; i>=0; i--)
		cout<<a[i]<<"\t";
			
}

