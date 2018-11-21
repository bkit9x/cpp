#include <iostream>
using namespace std;
class Date{
	private:
		int d, m, y;
	public:
		Date(int ngay=1, int thang=1, int nam=1970){
			d=ngay;
			m=thang;
			y=nam;			
		}
		void Nhap(){
			cout<<"ngay: ";
			cin>>d;
			cout<<"thang: ";
			cin>>m;
			cout<<"nam: ";
			cin>>y;
		}
		void In(){
			cout<<d<<"/"<<m<<"/"<<y;
		}
		int HopLe(){
			if(d<1 || m<1 || d>31 || m>12) return 0;
			if(m==4 || m==6 || m==9 || m==11){
				if(d>30) return 0;
			}
			if(y%400==0 || y%4==0 && y%100!=0){
				if(m==2){
					if(d>29) return 0;
				}
			}
			else
				if(m==2){
					if(d>28) return 0;
				}
			return 1;
		}
		Date Cong(int n=1){
			/* code */
		}
};
main(){
	Date d;
	d.Nhap();
	cout<<d.HopLe()<<endl;
	d.In();
}

