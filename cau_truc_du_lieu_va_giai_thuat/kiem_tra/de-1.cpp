#include <iostream>
using namespace std;
typedef int ElementType;
struct Node{
	ElementType Element;
	Node*Next;
};
typedef Node*Position;
typedef Node*List;
void MakeNullList(List &L)
{
	L=new Node;
	L->Next=NULL;
}
int EmptyList(List L){
	return L->Next==NULL;
}
void InsertList(ElementType X,Position P,List &L)
{
	Position Temp;
	Temp=new Node;
	Temp->Element=X;
	Temp->Next=P->Next;
	P->Next=Temp;
}
Position Last(List L)
{
	Position P=L;
	while(P->Next!=NULL)
		P=P->Next;
	return P;	
	
}
void ReadList(List &L){
	ElementType X;
	do{
		cout<<"Nhap noi dung phan tu: ";
		cin>>X;
		if(X!=0) InsertList(X,Last(L),L);
	}while(X!=0);
}
void PrintList(List L)
{
	if(EmptyList(L)!=0)
		cout<<"Danh sach rong"<<endl;
	else
		while(L->Next!=NULL)
		{
			cout<<L->Next->Element<<'\t';
			L=L->Next;
		}
}


//cau3
ElementType max(List L)
{
	ElementType pmax=L->Next->Element;
	Node* P;
	for(P=L;P->Next!=NULL;P=P->Next)
	{
		if(pmax<P->Next->Element)
		{
			pmax=P->Next->Element;	
		}
	}
	return pmax;
}
void vitrimax(List L)
{
	if(EmptyList(L)==false){
	int vtr=1;
	ElementType pmax = max(L);
	
		while(L->Next!=NULL)
		{
			if(pmax == L->Next->Element)
				cout<<vtr;
			vtr++;
			L=L->Next;
		}
	}
}

//cau 4
void Ten_Ham(List &L)
{
	if(!EmptyList(L)){
		Position P;
		P = L->Next;
		while(P->Next!=NULL && P->Next->Next!=NULL)
		{
			if(P->Next->Element < P->Element){
				Position Temp;
				Temp=P->Next;
				P->Next=Temp->Next;
				delete Temp;
			}
			else
				P = P->Next;
		}
	}
}


main(){
	List L;
	Position P;
	ElementType X;
	MakeNullList(L);
	cout<<"Nhap danh sach lien ket :"<<endl;
	ReadList(L);
	cout<<"in danh sach lien ket: "<<endl;
	PrintList(L);
	cout<<endl<<"vi tri max: ";
	vitrimax(L);
	cout<<endl;	
	Ten_Ham(L);
	cout<<"danh sach lien ket tang dan: "<<endl;
	PrintList(L);
}
