#include <iostream>
#include <string.h>
using namespace std;

char ht[32];
float a, b;
void hoten(){
	cout<<"nhap ho ten: ";
	cin.get(ht, 32);
}
void inht(char ht[32]){
	cout<<strupr(ht);
}
void ichcn(){
	cout<<"nhap canh thu 1: ";
	cin>>a;
	cout<<"nhap canh thu 2: ";
	cin>>b;
}
float cv(float a, float b){
	return 2*a+2*b;
}
float s(float a, float b){
	return a*b;
}
main(){

	hoten();
	inht(ht);
	ichcn();
	cout<<cv(a,b);
	cout<<s(a,b);
	
}


