#include <iostream>
using namespace std;

main(){
	float a[30], min, max;
	int n, i;
	do{
	   cout<<"nhap n: ";
	   cin>>n;
	} while(n>30 || n<1);
	for(i=0; i<n; i++){
		cout<<"nhap phan tu cho mang: ";
		cin>>a[i];
	}
	min = a[0];
	max = a[0];
	for(i=1; i<n; i++){
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	cout<<"so be nhat: "<<min<<endl;
	cout<<"so lon nhat: "<<max<<endl;
}

