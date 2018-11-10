#include <iostream>
using namespace std;
typedef int ElementType;
typedef struct Node {
    ElementType Element;
    Node* Next; 
}
typedef Node* Position;
typedef Node* List;
void MakeNullList(List &L){
    L = new Node;
    L -> Next = NULL;
}
void AddLastElement(List &L, ElementType X, ElementType Y){
    /*
    List Tmp;
    MakeNullList(Tmp);
    Tmp->Element = X;
    Position P;
    */
   //đếm số phần tử Y
    int count = 0;
    while(L->Next != NULL)
        if(L == Y)
            count++;
    cout<<count;
}
void ReadList(List &L){
    ElementType X;
    do{
        cout<<"nhap phan tu: ";
        cin<<X;
        if(X!=0) InsertList(X, Last(L),L)
    }
}