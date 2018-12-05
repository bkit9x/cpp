#include <iostream>
#include <conio.h>
using namespace std;

int tmax(int x, int y){
    if(x > y)
		return x;
 		return y;
}
 
main(){
		char s, hoa=0, thuong=0, so=0, kitu=0, max;
		do{
		   cout<<"nhap ki tu :";
		   	s = getch();
		   	cout<<s<<endl;
		   	if(s!='.')
			   	if(s<48)
			   		kitu++;
			   	else
				   if(s<58)
		   				so++;
			   		else
					   if(s<65)
		   			 		kitu++;
		   		 		else
		   		 			if(s<91)
		   		 				hoa++;
			   		 		else
		   			 			if(s<97)
		   			 				kitu++;
		   		 				else
		   		 					if(s<123)
		   		 						thuong++;
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

