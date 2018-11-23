//tu dai nhat co bao nhieu ki tu
#include <iostream>
#include <string.h>
using namespace std;

main(){
	char s[256];
	int i, len, max=0, l=0;
	cout<<"nhap xau ki tu: ";
	cin.getline(s,256);
	len = strlen(s);

	//b
	for(i=0; i<len; i++){
		if(s[i]==' '){
			if(l>max) max=l;
			l=0;
		}
		else l++;
		//neu tu dai nhat nam o cuoi cung
		if(l>max) max=l;
	}
	cout<<"tu dai nhat co "<<max<<" ki tu";
}
