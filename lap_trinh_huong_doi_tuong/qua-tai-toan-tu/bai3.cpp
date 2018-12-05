#include <iostream>
using namespace std;
class Matrix{
	private:
		double a[20][20];
		int n;
	public:
		friend istream & operator>>(istream &is, Matrix &x){
			cout<<"Nhap kich thuoc ma tran: ";
			cin>>x.n;
			for(int i=0; i<x.n; i++)
				for(int j=0; j<x.n; j++){
					cout<<"nhap phan tu thu ["<<i<<"]["<<j<<"]: ";
					is>>x.a[i][j];
				}			
			return is;
		}
		friend ostream & operator<<(ostream &os, Matrix x){
			for(int i=0; i<x.n; i++){
				for(int j=0; j<x.n; j++){
					os<<x.a[i][j]<<'\t';
				}
			cout<<endl;
			}

			return os;
		}		
};
main(){
	Matrix m;
	cout<<"nhap ma tran:\n";
	cin>>m;
	cout<<"Ma tran vua nhap:\n"<<m;
	
}
