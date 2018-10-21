#include <iostream>
using namespace std;

main(){
	long bin = 0;
	int i=1, n;
	cout<<"nhap n: ";
	cin>>n;
	while(n>0){
		bin = bin + (n%2)*i;
		i*=10;
		n/=2;
	}
	cout<<bin;
}

