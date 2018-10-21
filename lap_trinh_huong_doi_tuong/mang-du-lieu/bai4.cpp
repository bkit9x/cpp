//loi
//system eror

#include <iostream>
using namespace std;
main(){
	float a[30], x;
	int n, i;
	do{
	   cout<<"nhap n:";
	   cin>>n;
	} while(n>30 || n<1);
	for(i=0; i<n; i++){
		cout<<"nhap day sap xep tang dan: ";
		cin>>a[i];
	}
	cout<<"nhap x: ";
	cin>>x;
	for(i=n-1; i>x-1; i--){
		a[i+1]=a[i];
	}
	a[i]=x;
	n++;
	cout<<"day : "<<endl;
	for(i=0; i<n; i++)
		cout<<a[i]<<"\t";

}

