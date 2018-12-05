#include <iostream>
using namespace std;
main(){
	int m, i, j;
	cout<<"nhap m: ";
	cin>>m;
	float a[m][m];
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			cout<<"nhap phan tu ["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}
	float min = a[0][0], max = a[0][0];
	//so nho nhat, lon nhat
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			if(a[i][j]>max) max = a[i][j];
			if(a[i][j]<min) min = a[i][j];
			
		}
	}
	cout<<"\nso lon nhat = "<<max<<", chi so: ";
			for(i=0; i<m; i++)
				for(j=0; j<m; j++)
					if(a[i][j]==max) cout<<"["<<i<<"]["<<j<<"]\t";


	cout<<"\nso nho nhat = "<<min<<", chi so: ";
			for(i=0; i<m; i++)
				for(j=0; j<m; j++)
					if(a[i][j]==min) cout<<"["<<i<<"]["<<j<<"]\t";

}

