#include <iostream>
using namespace std;

main(){
	int cha, con;
	int nam=0;
	do{
		cout<<"nhap tuoi cha, con: ";
		cin>>cha>>con;
	} while(cha<=2*con);
	while(cha!=2*con){
			cha++;
			con++;
			nam++;
	}
	cout<<"sau "<<nam<<" nam nua tuoi cha bang tuoi con";	

}


