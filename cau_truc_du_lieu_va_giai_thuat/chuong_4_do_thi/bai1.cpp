#include <iostream>
using namespace std;
const int maxn = 20;
typedef int ElementType;
typedef struct Node{
    ElementType Element;
    Node* Next;
};
typedef Node* List;
typedef List Graph[maxn];

void Initiliaze(Graph &g, int n, int &e)
{
	int i;
	for(i = 1; i <= n; i++)
    {
        g[i] = new Node;
        g[i]->Next = NULL;
        e=0;
    }
}
void InsertArc(Graph &g, int n, int &e, int d1, int d2){
    Node *t = new Node;
    t->Element = d2;
    t->Next = g[d1]->Next;
    g[d1]->Next = t;
    e++;
}
void DeleteArc(Graph &g, int n, int &e, int d1, int d2){
    Node *t;
    t = g[d1];
    
    while(t->Next!= NULL && t->Next->Element != d2){
        t=t->Next;
    }
    
    if (t->Next != NULL && t->Next->Element == d2) {
        Node *p;
        p=t->Next;
        t->Next = p->Next;
        delete p;
        e--;
    }
}
int CountArcFromVertice(Graph g, int n, int e, int d){
    int dem=0;
    Node *t;
    t = g[d];
    
    while(t->Next != NULL){
        dem++;
        t=t->Next;
    }
    return dem;
}
int CountArcToVertice(Graph g, int n, int e, int d){
    int i, dem=0;
    Node *t;
    for( i = 1; i <= n; i++)
    {
        t=g[i];
        while(t->Next != NULL && t->Next->Element != d){
            t = t->Next;
        }
        if (t->Next != NULL) {
            dem++;
        }
    }
    return dem;
 }

void InsertVertice(Graph &g, int &n, int &e, int scxp, int scdd){
    int i, d;
    g[n+1]=new Node;
    g[n+1]->Next = NULL;
    for(i=1; i<=scxp; i++){
        cout<<"dinh moi di den dinh nao: ";
        cin>>d;
        InsertArc(g, n, e, n+1, d);
    }
    
    for( i = 1; i <= scdd; i++)
    {
        cout<<"dinh nao di den dinh moi: ";
        cin>>d;
        InsertArc(g, n, e, d, n+1);
    }
    n++;    
}
void DeleteVertice (Graph &g, int &n, int &e, int d){
    int i;
    e=e-CountArcFromVertice(g, n, e, d);
    for (i=1; i<=n; i++)
        if (i==d) g[i]->Next = NULL ;
        else DeleteArc(g, n, e, i, d);
    for (i=d; i<=n-1; i++)
    g[i] = g[i+1];
    n--;
    for (i=1; i<=n; i++){
        Node *t = new Node;
        t = g[i];
        while(t->Next != NULL){
            if(t->Next->Element>d)
                t->Next->Element = t->Next->Element - 1;
            t = t->Next;
        }
    }
}
void ReadGraph(Graph &g, int n, int e){
    int i, d1, d2, sc = e;
    
    for(  i = 1; i <= sc; i++)
    {
        cout<<"Nhap cung di tu d1 den d2: ";
        cin>>d1>>d2;
        InsertArc(g, n, e, d1, d2);
    }    
}

void PrintGraph(Graph g, int n, int e)
{
	int i;
    Node *t = new Node;
	for(i = 1; i <= n;i++)
	{
        cout<<"Dinh "<<i<<" : ";
        t=g[i];
        while(t->Next != NULL){
            cout<<t->Next->Element<<"\t";
            t = t->Next;
        }
	cout<<endl;
    }
}

void MaxArcFormVertice(Graph g, int n, int e){
    int i, max = CountArcFromVertice(g, n, e, 1);
    for(i=2; i<=n; i++){
        if(max<CountArcFromVertice(g, n, e, i))
            max = CountArcToVertice(g, n, e, i);
        
        for( i = 1; i <=n; i++)
        {
            if(CountArcFromVertice(g, n, e, i)==max)
                cout<<i<<'\t';
        }
        
    }
}

void MinArcFormVertice(Graph g, int n, int e){
    int i, min = CountArcFromVertice(g, n, e, 1);
    for(i=2; i<=n; i++){
        if(min>CountArcFromVertice(g, n, e, i))
            min = CountArcToVertice(g, n, e, i);
        
        for( i = 1; i <=n; i++)
        {
            if(CountArcFromVertice(g, n, e, i)==min)
                cout<<i<<'\t';
        }
        
    }
}

int DemKhuyen(Graph g, int n){
    int dem = 0, i;
    for(i=1; i<=n; i++){
        
        while(g[i]->Next != NULL && g[i]->Next->Element != i){
            g[i]=g[i]->Next;
        }
        if(g[i]->Next != NULL && g[i]->Next->Element == i)
            dem++;
    }
    return dem;
}
bool LaDinhTreo(Graph g, int n, int e, int d){
    if(g[d]->Next!=NULL)
        return false;
    if(CountArcToVertice(g, n, e, d)!=0)
        return false;
    return true;
}
int DemDinhTreo(Graph g, int n, int e){
    int dem=0, i;
    for(i=1;i<=n; i++){
        if(LaDinhTreo(g,n,e,i))
            dem++;
    }
    return dem;
}


void PrintArcToVertice(Graph g, int n, int e, int d){
    for(int i=1; i<=n; i++){
        while(g[i]->Next != NULL && g[i]->Next->Element!=d)
            g[i]=g[i]->Next;
        if(g[i]->Next!=NULL && g[i]->Next->Element == d)
            cout<<i<<'\t';
    }
}

void InCapDinh(Graph g, int n, int e){
    for(int i = 1; i <= n-1; i++)
    {
        for(int j=i+1; j<=n; j++){
            if(CountArcFromVertice(g, n, e, i)+CountArcToVertice(g, n, e, i)==CountArcFromVertice(g, n, e, j)+CountArcToVertice(g, n, e, j))
                cout<<i<<'\t'<<j<<endl;
        }
    }    
}

int CountIfCountArcFromVerticeEqualCountArcToVertice(Graph g, int n, int e){
    int dem = 0;
    for(int i=1; i<=n; i++){
        if(CountArcFromVertice(g,n,e,i)==CountArcToVertice(g, n, e, i))
            dem++;
    }
    return dem;
}
main(){
    Graph g;
    int n, e, d1, d2, d;
    do
    {
        cout<<"Nhap so dinh cua do thi: ";
        cin>>n;
    } while (n<=0 || n>=maxn);
    Initiliaze(g, n, e);
    cout<<" do thi vua khoi tao la: \n";
    PrintGraph(g, n, e);
    cout<<"Nhap so cung cua do thi: ";
    cin>>e;
    ReadGraph(g, n, e);
    cout<<"do thi vua nhap la: \n";
    PrintGraph(g, n, e);
    
    //2.a
    cout<<"\ndinh co cung den cac dinh khac nhieu nhat la: ";
    MaxArcFormVertice(g, n, e);

    //2.b
    cout<<"\ndinh co cung den cac dinh khac it nhat la: ";
    MinArcFormVertice(g, n, e);

    //2.c
    cout<<"\nso khuyen la: "<<DemKhuyen(g, n);

    //2.d
    cout<<"\nso dinh treo la: "<<DemDinhTreo(g, n, e);
	/*
	ERROR:
	
    //2.e
    cout<<"\nnhap dinh d: ";
    cin>>d;
    cout<<"dinh co cung den dinh "<<d<<" la: \n";
    PrintArcToVertice(g, n, e, d);
    //2.f
    cout<<"\ncac cap dinh co tong so cung xuat phat bang so cung den: ";
    InCapDinh(g, n, e);

    //2.g
    cout<<"\nso dinh co so cung xuat phat bang so cung den la: "<<CountIfCountArcFromVerticeEqualCountArcToVertice(g, n, e);
	*/
}
