#include <iostream>
#include <math.h>
using namespace std;

main(){
	int n, i=1;
	long temp=0;
	cout<<"nhap so nguyen duong n: ";
	cin>>n;
	//a
	for(i; i<=n; i++){
		temp+=i;
	}
	cout<<"S1="<<temp*1.0/n<<endl;
	//b
	temp=0;
	for(i=0; i<=n; i++){
		temp+=i*i;
	}
	cout<<"S2="<<sqrt(temp)<<endl;
	cout<<sqr(4,2);
}

