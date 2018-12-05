#include <iostream>
using namespace std;

main(){
	int a, b;
	for(int i=10; i<100; i++){
		a = i/10;
		b = i%10;
		if(a*b==2*(a+b))
			cout<<i<<"\t";
	}
}

