#include <iostream>
using namespace std;

main(){
	int n;
	cout<<"nhap so nguyen: ";
	cin>>n;
	cout<<n<<" la so ";
	if(n<0)
		cout<<"am";
	else
		cout<<"duong";
	cout<<", ";
	if(n%2==0)
		cout<<"chan";
	else
		cout<<"le";
			
//	cout<<n<<"  la so "<<(n<0 ? "am" : "duong")<<", "<<(n%2==0 ? "chan" : "le");

}
