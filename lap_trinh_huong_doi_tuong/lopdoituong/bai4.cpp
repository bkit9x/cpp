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
		PhanSo Cong(PhanSo x){
			int t = a*x.b+x.a*b;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
		
		PhanSo Tru(PhanSo x){
			int t = a*x.b-x.a*b;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
		
		PhanSo Nhan(PhanSo x){
			int t = a*x.a;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
		PhanSo Chia(PhanSo x){
			x.NghichDao();
			int t = a*x.a;
			int m = b*x.b;
			PhanSo result(t, m);
			return result;
		}
};

main(){
	PhanSo a(3,7);
	PhanSo b(4,9);
	PhanSo x, y;
	x.Nhap();
	y.Nhap();
	PhanSo k;
	k=x.GiaTriNghichDao();
	
	cout<<"\nnghich dao cua x: \n";
	k.In();

	cout<<"\nx+y: \n";
	k = x.Cong(y);
	k.In();
	
	//tong n phan so
	int n;
	do{
		cout<<"\nnhap n:";
		cin>>n;
	} while(n<=0);
	PhanSo day[n];
	for(int i=0; i<n; i++){
		day[i].Nhap();
	}
	PhanSo sum(0,1);
	for(int i=0; i<n; i++){
		sum = sum.Cong(day[i]);
	}
	cout<<"tong = ";
	sum.In();
	
	//phan so lon nhat
	PhanSo max;
	max = day[0];
	for(int i=1; i<n; i++){
		if(day[i].GiaTri()>max.GiaTri())
			max=day[i];
	}
	cout<<"\nphan tu lon nhat la : ";
	max.In();
	//sap xep
	cout<<"\nsap xep: \n";
	PhanSo Tmp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(day[j].GiaTri()>day[i].GiaTri()){
				Tmp = day[i];
				day[i]=day[j];
				day[j]=Tmp;
			}				
		}
	}
	
	for(int i=0; i<n; i++){
		day[i].In();
		cout<<"\t";
	}
}

