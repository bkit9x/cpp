// bai cua ban Dat

#include <iostream>
#include <string.h>

using namespace std;

main(){
	   char str[64];
	   int count=0, i,j, end=-1, start=-1;
	   cout<<"nhap chuoi: ";
	   cin.getline(str, 64);
		if(str[0]!=' ')	count=1;
	   for(i=0; i<strlen(str); i++){
	   		cout<<endl;
			if(str[i] = ' ' && str[i+1]!= ' '){
	   			count++;
	   			cout<<endl;
		   }
	   }
	   cout<<endl;
	   cout<<"so tu cua chuoi: "<<count++<<endl;
}
