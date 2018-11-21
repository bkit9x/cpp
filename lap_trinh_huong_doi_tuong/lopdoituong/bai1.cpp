#include <iostream>
#include <math.h>
using namespace std;
class Diem{
	  private:
	  	int x, y;
	  public:
	  	Diem(int h=0, int t=0){
	  		x=h;
	  		y=t;
		}
		void NhapDiem(){
			cout<<"hoanh do: ";
			cin>>x;
			cout<<"tung do: ";
			cin>>y;
			cout<<endl;
		}
		void InDiem(){
			cout<<"("<<x<<","<<y<<")";
			cout<<endl;
		}
		int GiaTriX(){
			return x;
		}
		int GiaTriY(){
			return y;
		}
		float KhoangCach(Diem m){
			return sqrt(pow(m.x-x,2)+pow(m.y-y,2));
		}
};
main(){
	Diem A(3, 4);
	A.InDiem();
	Diem B;
	B.NhapDiem();
	B.InDiem();
	Diem C(-B.GiaTriX(), -B.GiaTriY());
	C.InDiem();
	Diem O(0,0);
	cout<<"\nkhoang cach B den tam O: "<<B.KhoangCach(O);
	cout<<"\nkhoang cach C den B: "<<B.KhoangCach(C);
}
