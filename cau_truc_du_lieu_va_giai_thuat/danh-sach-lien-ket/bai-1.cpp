/**************************************************
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!______code by Nguyen Hoang Kha aka hkit_________!!
!!____________https://fb.me/kha1999_______________!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
***************************************************/

#include <iostream>

using namespace std;

typedef int ElementType;

struct Node
{
    ElementType Element;
    Node* Next;
};

typedef Node* Position;

typedef Node* List;

int EmptyList(List L)
{
	return L->Next == NULL;
}

Position First(List L)
{
	Position P;
	P = L->Next;
	return P;
}

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

Position Last(List L)
{
	Position P;
	P=L;
	while(P->Next != NULL)
		P=P->Next;
	return P;
}

Position Locate(ElementType X, List L)
{
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

Position merge(Position p, Position q)
{
    if (p == NULL) return q;
    if (q == NULL) return p;
    if (p->Element > q->Element)
    {
		p->Next = merge(p->Next, q);
        return p;
    }
    else return merge(q,p);
}

Position Next(Position P, List L)
{
	if(P != NULL && P->Next != NULL)
		return P->Next;
	else return NULL;
}

Position Previous(Position P, List L)
{
	Position Temp;
	if(P==L) return NULL;
	else
	{
		Temp = L;
		while(Temp->Next != P) Temp = Temp->Next;
		return Temp;
	}
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

void ReadList(List &L)
{
	ElementType X;
	do{
		cout<<"Nhap noi dung phan tu: ";
		cin>>X;
		if(X!=0) InsertList(X, Last(L), L);
	} while(X!=0);
}

ElementType Retrieve(Position P, List L)
{
	if(P!=NULL) return P->Element;
	else return 0;
}
void Swap(Position &q, Position &p)
{
	Position Temp;
	Temp = new Node;
	Temp->Element = q->Element;
	q->Element = p->Element;
	p->Element = Temp->Element;
}

void Sort(List &L, bool asc = true){
	Position p, q;
	p = First(L);
	while(p != NULL)
	{
		q = Next(p, L);
			while(q != NULL)
			{
				if(asc)
				{
					if(Retrieve(p, L) > Retrieve(q, L))
					Swap(q, p);
					q = Next(q, L);
				}
				else
				{
					if(Retrieve(p, L) < Retrieve(q, L))
					Swap(q, p);
					q = Next(q, L);
				}

			}
		p = Next(p, L);
	}
}

main(){
	List L, L1, L2, Temp;
	Position P, Q;
	ElementType X;
	int i,j;
	MakeNullList(L);
/*
	//a sap xep dang sach tang dan
	cout<<"---------nhap danh sach lien ket-----------\n";
	ReadList(L);
	cout<<"---------In danh sach lien ket--------\n";
	PrintList(L);
	Sort(L);
	cout<<"\n---------Danh sach lien ket da sap xep--------\n";
	PrintList(L);
*/
	//b tron 2 danh sach giam dan thanh 1 danh sach giam dan
	MakeNullList(L);
	MakeNullList(L1);
	MakeNullList(L2);
	
	cout<<"\n---------nhap danh sach lien ket giam dan 1-----------\n";
	ReadList(L1);
	cout<<"\n---------danh sach lien ket vua nhap--------\n";
	PrintList(L1);
	cout<<"\n---------nhap danh sach lien ket giam dan 2-----------\n";
	ReadList(L2);
	cout<<"\n---------danh sach lien ket vua nhap--------\n";
	PrintList(L2);
	/*
	if(First(L1)<First(L2)){
		Temp = L1;
		L1 = L2;
		L2 = Temp;
	}
	L->Element
	*/
	L = merge(L1, L2);
	cout<<"\n---------danh sach lien ket vua gop--------\n";
	PrintList(L);

}
