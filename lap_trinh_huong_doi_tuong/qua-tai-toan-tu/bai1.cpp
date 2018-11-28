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
		void Nhap(){
			do{
				cout<<"nhap tu so: ";
				cin>>a;
				cout<<"nhap mau so: ";
				cin>>b;
			}while(b==0);
		}
		void In(){
			if(a==0)
				cout<<0;
				else
					if(b==1)
						cout<<a;
					else
						if(b<0)
							if(a<0)
								cout<<-1*a<<"/"<<-1*b;
							else
								cout<<-a<<"/"<<-1*b;
						else
							cout<<a<<"/"<<b;

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
	k = a+b;
	k.In();
}
