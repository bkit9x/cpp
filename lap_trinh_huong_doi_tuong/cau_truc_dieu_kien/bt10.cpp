#include <iostream>
#include <string.h>
using namespace std;
main(){
	int i = 0, count = 0;
	char str[32];
	cout<<"nhap chuoi: ";
	cin.get(str, 32);
	cout<<"cac vi tri cua chu 'a':\n";
	for(i; i<strlen(str); i++){
		if(str[i]=='a'){
			cout<<i<<'\t';
			count++;
		}
	}
	cout<<"\ntong so lan xuat hien chu'a': "<<count;
}

