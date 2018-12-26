#include <iostream>
using namespace std;
typedef int ElementType;
struct Node
{
    ElementType Element;
    Node* Next;
};
typedef Node* List;
typedef Node* Position;

void InsertList(ElementType X, Position P, List &L)
{
	Position Temp;
	Temp = new Node;
	Temp->Element = X;
	Temp->Next = P->Next;
	P->Next = Temp;
}

void MakeNullList(List &L)
{
	L = new Node;
	L->Next = NULL;
}
int EmptyList(List L)
{
	return L->Next == NULL;
}

void PrintList(List L)
{
	if(EmptyList(L)!=0)
		cout<<"danh sach rong\n";
	else
		while(L->Next != NULL){
			cout<<L->Next->Element<<"\t";
			L=L->Next;
		}
}

Position Last(List L)
{
	Position P;
	P=L;
	while(P->Next != NULL)
		P=P->Next;
	return P;
}

void ReadList(List &L)
{
	ElementType X;
	do{
		cout<<"Nhap noi dung phan tu: ";
		cin>>X;
		if(X!=0) InsertList(X, Last(L), L);
	} while(X!=0);
}

ElementType TimMax(List L){
    ElementType max = L->Next->Element;
    L=L->Next;
	while(L != NULL){
        if(L->Element > max) max = L->Element;
		L=L->Next;
	}
    return max;
}

int demMax(List L){
    ElementType max = TimMax(L);
    int dem = 0;
	while(L != NULL){
        if(L->Element == max) dem++;
		L=L->Next;
	}
    return dem;
}

main(){
	List L;
	MakeNullList(L);	
	cout<<"\n---------nhap danh sach lien ket giam dan 1-----------\n";
	ReadList(L);
	cout<<"\n---------danh sach lien ket vua nhap--------\n";
	PrintList(L);
	cout<<"max= "<<TimMax(L);
    cout<<" co "<<demMax(L)<<" phan tu lon nhat";
}
