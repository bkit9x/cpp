#include <iostream>
#include <string.h>
using namespace std;
main(){
	char str[32];
	int i = 0, count = 1;
	cout<<"nhap chuoi: ";
	cin.get(str, 32);
	cout<<"so tu: ";
	int len = strlen(str);
	for(i; i<len; i++){
		if(str[i]==' ' && i != len-1) count++;
	}
	cout<<(len > 0 ? count : 0);//do dai chuoi >0, so tu = so khoang trang +1, nguoc lai bang 0
	cout<<endl;
	for(i=0; i<len; i++){
		cout<<(str[i]==' ' ? '\n' : str[i]);
	}
}

