#include <iostream>
using namespace std;
class Clock{
	  private:
	  	int gio, phut, giay;
	  public:
	  	Clock(){
	  		gio=0;
	  		phut=0;
	  		giay=0;
		}
	  	Clock(int h, int m, int s){
	  		gio=h;
	  		phut=m;
	  		giay=s;
		}

		void Nhap(){
			do{
				cout<<"gio: ";
				cin>>gio;
			} while(gio<0 ||gio >23);
			do{
				cout<<"phut: ";
				cin>>phut;
			} while(phut<0 ||phut >59);
			do{
				cout<<"giay: ";
				cin>>giay;
			} while(giay<0 ||giay >59);
		}
		
		void In(){
			cout<<gio<<" gio "<<phut<<" phut "<<giay<<" giay.\n";
		}

		void LamTron(){
			int time = gio*3600+phut*60+giay;
			Clock result(time/3600%24, time%3600/60, time%60);
			return result;
		}
		
		Clock Cong(int n){
			int time = gio*3600+phut*60+giay;
			time+=n*60;
			Clock result(time/3600%24, time%3600/60, time%60);
			return result;
		}		
};
main(){
	Clock a(9,15,38);
	a.In();
	Clock b;
	b.Nhap();
	b.In();
	Clock c;
	c=b.Cong(45);
	c.In();
}
