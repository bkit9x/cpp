#include <iostream>
using namespace std;

main(){
	float day[10] = {1,2,3,5,6,7,8,9}, x;
	int len = 8, i, j;
	
	//in day ban dau da sap xep

	cout<<"day da sap xep :";
	for(i = 0; i<len; i++)
		cout<<day[i];
		
	//nhap phan tu can chen
	cout<<endl<<"nhap x: ";
	cin>>x;

	j=len-1;
	//lap tu len-1 den khi nao co phan tu <= x thi dung lai, lui phan tu ra phia sau day
	while(day[j]>x){
		day[j+1]=day[j];
		j--;
	}
	//gan x
	day[j+1]=x;
	
	//tang tong so phan tu len
	len++;
	
	//in day 
	cout<<"kq: ";
	for(i = 0; i<len; i++)
		cout<<day[i];

}

