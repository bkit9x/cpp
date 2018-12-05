#include <iostream>
using namespace std;

class PhanSo{
	private:
		int a, b;
	public:
		PhanSo(){
			a=0;
			b=1;
		}
		PhanSo(int tu, int mau){
			a = tu;
			b = mau;
		}
		friend istream & operator>>(istream &is, PhanSo ps){
			do{
				cout<<"nhap tu so: ";
				is>>ps.a;
				cout<<"nhap mau so: ";
				is>>ps.b;
			}while(ps.b==0);
			return is;
		}
		friend ostream & operator<<(ostream &os, PhanSo &ps){
			if(ps.a==0)
				os<<0;
				else
					if(ps.b==1)
						os<<ps.a;
					else
						if(ps.b<0)
							if(ps.a<0)
								os<<-1*ps.a<<"/"<<-1*ps.b;
							else
								os<<-ps.a<<"/"<<-1*ps.b;
						else
							os<<ps.a<<"/"<<ps.b;

		}

		void NghichDao(){
			a=a+b;
			b=a-b;
			a=a-b;
		}
		PhanSo GiaTriNghichDao(){
			PhanSo result(b,a);
			return result;
		}
		float GiaTri(){
			return a/b;
		}
		int SoSanh(PhanSo x){
				return a/b-x.GiaTri();
		}
		PhanSo operator+(PhanSo x){
			int t = a*x.b+x.a*b;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
		
		PhanSo operator-(PhanSo x){
			int t = a*x.b-x.a*b;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
		
		PhanSo operator*(PhanSo x){
			int t = a*x.a;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
		PhanSo operator/(PhanSo x){
			x.NghichDao();
			int t = a*x.a;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
};

main(){
	PhanSo a(3,7), b(4,9), k;
	cin>>k;
	cout<<endl<<k;
	k = a+b;
	cout<<endl<<k;
	
}
