#include <iostream>
#include <conio.h>
using namespace std;

int tmax(int x, int y){
    if(x > y)
		return x;
 		return y;
}
 
main(){
		char s;
		int hoa=0, thuong=0, so=0, kitu=0, max;
		do{
		   cout<<"nhap ki tu :";
		   	s = getch();
		   	cout<<s<<endl;
		   	if(s!='.')
			   	if(s<='9' && s>='0')
	   				so++;
		   		else
   		 			if(s<='Z' && s>='A')
		   		 		hoa++;
			   		else
		   				if(s<='z' && s>='a')
	 						thuong++;
	 					else 
	 						kitu++;
		} while(s!='.');
		cout<<"so ki tu viet hoa: "<<hoa;
		cout<<"\nso ki tu viet thuong: "<<thuong;
		cout<<"\nso chu so: "<<so;
		cout<<"\nso ki tu: "<<kitu;
		cout<<"\nloai ki tu nhieu nhat: ";
 	    max = tmax( tmax(so, thuong), tmax(hoa, kitu) );
		if(max==so)
			cout<<"chu so";
			else
				if(max==thuong)
					cout<<"chu thuong";
				else
					if(max==hoa)
						cout<<"chu hoa";
					else
						cout<<"ki tu";
 }

