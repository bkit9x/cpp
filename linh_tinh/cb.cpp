#include <iostream>
#include <string.h>
using namespace std;
class cl
{
	public:
		string hoten;
	public:
		friend istream & operator >> (istream &is, cl &b){
			cout<<">> Nhap Ho ten: ";
			getline(is, b.hoten);
//			is>>b.hoten;
			return is;
		}
		friend ostream & operator<<(ostream &os, cl &b){
			cout<<">> Ho ten: ";
			os<<b.hoten;
			return os;
		}
};

main()
{
	cl c;
	cin>>c;
	cout<<c;
}
