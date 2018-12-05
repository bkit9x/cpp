#include <iostream>
#include <string.h>
using namespace std;

main(){
	   char str[64], i;
	   int a[10], j;
	   cout<<"nhap chuoi: ";
	   cin.getline(str, 64);
	   for(i='0'; i<='9'; i++){
	   		a[i]=0;
	   }
	   for(j=0; j<strlen(str); j++)
			a[str[j]]++;
	   for(i='0'; i<='9'; i++)
	   		cout<<i<<" : "<<a[i]<<endl;
}
