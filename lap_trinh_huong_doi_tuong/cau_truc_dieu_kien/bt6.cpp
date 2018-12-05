#include <iostream>
using namespace std;
main(){
	int m, n, i, j, sum=0, sumd=0, suma=0, sumc=0, suml=0;
	cout<<"nhap m,n: ";
	cin>>m>>n;
	int a[m][n];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cout<<"nhap phan tu ["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}
	//tong cac phan tu cua ma tran
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			sum+=a[i][j];
		}
	}
	cout<<"\ntong cac phan tu: "<<sum;	

	//tong cac phan tu duong cua ma tran
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]>0)
				sumd+=a[i][j];
		}
	}
	cout<<"\ntong cac phan tu duong: "<<sumd;	


	//tong cac phan tu am cua ma tran
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]<0)
				suma+=a[i][j];
		}
	}
	cout<<"\ntong cac phan tu am: "<<suma;	


	//tong cac phan tu chan cua ma tran
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]%2==0)
				sumc+=a[i][j];
		}
	}
	cout<<"\ntong cac phan tu chan: "<<sumc;	


	//tong cac phan tu le cua ma tran
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j] % 2 != 0)
				suml+=a[i][j];
		}
	}
	cout<<"\ntong cac phan tu le: "<<suml;	

}

