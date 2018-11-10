#include <iostream>
using namespace std;

typedef int ElementType;

typedef struct Node{
    ElementType Element;
    Node* Next;
};
typedef Node* Position;
typedef Node* List;

void MakeNullList(List &L){
	L = new Node;
	L->Next = NULL;
}
int EmptyList(List L){
	return L->Next == NULL;
}
void InsertList(ElementType X, Position P, List &L){
	Position Temp;
	Temp = new Node;
	Temp->Element = X;
	Temp->Next = P->Next;
	P->Next = Temp;
}

Position Locate(ElementType X, List L){
	Position P;
	int found = 0;
	P = L;
	while(P->Next != NULL && found == 0)
		if(P->Next->Element == X)
			found=1;
		else
			P=P->Next;
	return P->Next;
}

Position First(List L){
	Position P;
	P = L->Next;
	return P;
}

Position Last(List L){
	Position P;
	P=L;
	while(P->Next != NULL)
		P=P->Next;
	return P;
}
void ReadList(List &L){
	ElementType X;
	do{
		cout<<"Nhap noi dung phan tu: ";
		cin>>X;
		if(X!=0) InsertList(X, Last(L), L);
	} while(X!=0);
}
void PrintList(List L){
	if(EmptyList(L)!=0)
		cout<<"danh sach rong\n";
	else
		while(L->Next != NULL){
			cout<<L->Next->Element<<"\t";
			L=L->Next;
		}
}
void debug(List L){
	while(L->Next != NULL){
		cout<<L->Element<<"\t";
		L=L->Next;
	}
}

main(){
	List L;
	Position P;
	ElementType X, ND;
	MakeNullList(L);
	cout<<"---------nhap danh sach lien ket-----------\n";
	ReadList(L);
	cout<<"---------In danh sach lien ket--------\n";
	PrintList(L);
	cout<<"\nPhan tu dau tien trong ds la: ";
	cout<<First(L)->Element<<endl;
	debug(L);
	cout<<"Phan tu cuoi cung trong ds la: ";
	cout<<Last(L)->Element<<endl;
	cout<<"Nhap phan tu can them: ";
	cin>>X;
	cout<<"ban muon them sau phan tu nao: ";
	cin>>ND;
	P=Locate(ND,L);
	if(P==NULL) cout<<"Khong them duoc\n";
	else InsertList(X, P, L);
	cout<<"---------In danh sach lien ket--------\n";
	PrintList(L);

}
