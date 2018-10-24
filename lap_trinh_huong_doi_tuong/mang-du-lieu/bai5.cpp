#include <iostream>
using namespace std;

main(){
	float mt[10][10], mtdx[10][10];
	int n,m,i,j;
	cout<<"nhap kich thuoc ma tran: ";
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			cout<<"nhap phan tu: ";
			cin>>mt[i][j];

		}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cout<<mt[i][j]<<"\t";
		cout<<endl;
	}

	cout<<"ma tran doi xung: \n";
	
	/* in ma tran doi xung luon
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cout<<mt[j][i]<<"\t";
		cout<<endl;
	}	
	*/

	//tim ma tran doi xung roi in
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			mtdx[i][j]=mt[j][i];
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cout<<mtdx[i][j]<<"\t";
		cout<<endl;
	}
}

