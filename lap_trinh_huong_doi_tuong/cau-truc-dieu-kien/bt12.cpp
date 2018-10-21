#include <iostream>
#include <string.h>
using namespace std;
main(){
	char str[32];
	int i = 0, count = 1;
	cout<<"nhap ho ten: ";
	cin.get(str, 32);
//	cout<<strupr(str);
	int len = strlen(str);
	//ho
	char ho[32];
	for(i; i<len; i++){
		ho[i] = str[i];
		if(str[i]==' ') break;
	}
	ho[strlen(ho)] = '\0';
	cout<<strupr(ho);

	char ten[32]="";
	int j=0;
	cout<<ten<<endl;
	for(i=len-1; i>0; i--){
		ten[j] = str[i];
		j++;
		if(str[i]==' ') break;
	}
	ten[strlen(ten)] = '\0';
	cout<<strupr(strrev(ten));
}

