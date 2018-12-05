#include <iostream>
using namespace std;
typedef float elementtype;
struct node 
{
	elementtype element;
	node* next;
};
typedef node* position;
typedef node* list;
/*struct LIST 
{
	node *head, *tail;
};
typedef LIST List;*/
void makenulllist(list &l)
{
	l=new node;
	l->next=NULL;
}
int emptylist(list l)
{
	return l->next==NULL;
}
void insertlist(elementtype x, position p, list &l)
{
	position temp;
	temp=new node;
	temp->element=x;
	temp->next=p->next;
	p->next=temp;
}
position first(list l)
{
	position p;
	p=l->next;
	return p;
}
position last(list l)
{
	position p=l;
	while(p->next!=NULL)
		p=p->next;
	return p;	
}
position next(position p, list l)
{
	return p->next;
}
position previous(position p, list l)
{
	position temp;
	if(p==l)
		return NULL;
	else 
	{
		temp=l;
		while(temp->next!=p)
			temp=temp->next;
		return temp;	
	}
}
position locatefirst(elementtype x, list l)
{
	position p;
	bool found=false;
	p=l;
	while(p->next!=NULL && found==false)
		if(p->next->element==x)
			found=true;
		else 
			p=p->next;
	return p->next;			
}
position locatelast(elementtype x, list l)
{
	position p, q;
	p=l;
	while(p->next!=NULL)
	{
		if(p->next->element==x)
			q=p->next;
		p=p->next;	
	}
	return p->next;
}
elementtype retrieve(position p, list l)
{
	if(p!=NULL)	
		return p->element;
	else 
		return 0;	
}
void deletelist(position p, list &l)
{
	position temp;
	if(p->next!=NULL)
	{
		temp=p->next;
		p->next=temp->next;
		delete temp;
	}
}
void readlist(list &l)
{
	elementtype x;
	do{
		cout<<"Nhap noi dung phan tu: ";
		cin>>x;
		if(x!=0) insertlist(x,last(l),l);
	}while(x!=0);
}
void printlist(list l)
{
	if(emptylist(l)!=0)
		cout<<"Danh sach rong !"<<endl;
	else 
		while(l->next!=NULL)
		{
			cout<<l->next->element<<"\t";
			l=l->next;	
		}	
}
/*void swap(elementtype &a, elementtype &b)
{
	elementtype temp=a;
	a=b;
	b=temp;
}*/
void swap(position &p, position &q)
{
	position temp=new node;
	temp->element=p->element;
	p->element=q->element;
	q->element=temp->element;
}
void sapxepds(list &l)
{
	position p, q;
	p = first(l);
	while(p!=NULL)
	{
		q=next(p,l);
		while(q!=NULL)
		{
			if(retrieve(p,l) > retrieve(q,l))
			{
				swap(p,q);
			}
			q=next(q,l);
		}
		p=next(p,l);
	}
}
/*void sapxepds(list &l)
{
    position p, q, temp;
    for(p=l;p!=NULL;p=p->next)
	{
        temp=p; //????
        for(q=p->next;q!=NULL;q=q->next)
		{
            if(temp->element > q->element)
            {
                temp=q; //????
            }
        }
        //????
        if(temp->element!=p->element)
        {
            int t=p->element;
            p->element=temp->element;
            temp->element=t;
        }
    }
}*/
/*int Min(list l)
{	
	elementtype min = 32767;
	position p;
	p = l;
	while(p->next!=NULL)
	{
		if(p->next->element < min)
		{
			min = p->next->element;
		}
	}
	return min;
}*/
int min(list l)
{
	elementtype pmin = 32767;
	for(node* p = l; p->next!=NULL; p=p->next)
	{
		if(pmin > p->next->element)
		{
			pmin = p->next->element;
		}
	}
	return pmin;
}
int max(list l)
{
	elementtype pmax = -32767;
	for(node* p = l; p->next!=NULL; p=p->next)
	{
		if(pmax < p->next->element)
		{
			pmax = p->next->element;
		}
	}
	return pmax;
}
void intuvitrimax(list l)
{
	position q;
	elementtype pmax = -32767;
	node* p;
	for(p = l; p->next!=NULL; p=p->next)
	{
		if(pmax < p->next->element)
		{
			pmax = p->next->element;
			q = p->next;
		}
	}
	while(q!=NULL)
	{
		cout<<q->element<<"\t";
		q=q->next;
	}
}
void inlist(list l)
{
		
}
float TongBoiK(list l,int k)
{
	position p;
	p=l;
	float s=0;
	while(p->next!=NULL)
	{
		if((int)(p->next->element) % k==0)
		{
			s = s + p->next->element;
		}
		p=p->next;
	}
	return s;
}
void TronGiam(list l1, list l2, list &l)
{
	makenulllist(l);
	position p1,p2,p;
	p1=l1;
	p2=l2;
	while(p1->next!=NULL && p2->next!=NULL)
	{
		if(p1->next->element > p2->next->element)
		{
			insertlist(p1->next->element,last(l),l);
			p1=p1->next;
		}
		else 
		{
			insertlist(p2->next->element,last(l),l);
			p2=p2->next;
		}
	}
	if(p1->next==NULL)
		last(l)->next=p2->next; 
	else 
		last(l)->next=p1->next;
}
void TronTang(list l1, list l2, list &l)
{
	makenulllist(l);
	position p1,p2,p;
	p1=l1;
	p2=l2;
	while(p1->next!=NULL && p2->next!=NULL)
	{
		if(p1->next->element > p2->next->element)
		{
			insertlist(p1->next->element,last(l),l);
			p1=p1->next;
		}
		else 
		{
			insertlist(p2->next->element,last(l),l);
			p2=p2->next;
		}
	}
	if(p1->next==NULL)
		last(l)->next=p2->next; 
	else 
		last(l)->next=p1->next;
	sapxepds(l);
}
/*void addfirst(list &l, node *p)
{
	if(l==NULL)
	{
		l=p;
	}
	else 
	{
		p->next = l;
		l = p;
	}
}
node* mergerlist(list l1, list l2, list &l)
{
	position p, p1, p2;
	makenulllist(l);
	p1=l1;
	p2=l2;
	if(p1!=NULL && p2!=NULL) 
		return NULL;
	p = new node;
	while(p1!=NULL || p2!=NULL)
	{
		if(p1!=NULL && p2!=NULL)
		{
			if(l->element < l->element)
			{
				p = p1;
				p1 = p->next;
				addfirst(l,p);
			}
			else 
			{
				p = p2;
				p2 = p->next;
				addfirst(l,p);
			}
		}
		if(p1!=NULL && p2==NULL) 
		{
			p = p2;
			p2 = p->next;
			addfirst(l,p);
		}
		if(p1==NULL && p2!=NULL)
		{
			p = p1;
			p1 = p->next;
			addfirst(l,p);
		}
	}
	return l;
}*/
main()
{
	list l, l1, l2;	
	position p, q, p1, p2;
	makenulllist(l);
	makenulllist(l1);
	makenulllist(l2);
	cout<<"=====NHAP DANH SACH LIEN KET===="<<endl;
	readlist(l);
	cout<<"=====IN DANH SACH LIEN KET====="<<endl;
	printlist(l);
	cout<<"\n";
	//2a
	sapxepds(l);
	cout<<"\n=====DANH SACH LIEN KET SAU KHI SAP XEP====="<<endl;
	printlist(l);
	//2b + 2c
	//Nhap l1
	cout<<"\n=====NHAP DANH SACH LIEN KET L1===="<<endl;
	readlist(l1);
	cout<<"\n=====IN DANH SACH LIEN KET L1====="<<endl;
	printlist(l1);
	cout<<"\n";
	//Nhap l2
	cout<<"\n=====NHAP DANH SACH LIEN KET L2===="<<endl;
	readlist(l2);
	cout<<"\n=====IN DANH SACH LIEN KET L2====="<<endl;
	printlist(l2);
	cout<<"\n";
	//Tron 2 ds giam -> 1 ds giam
	TronGiam(l1,l2,l);
	cout<<"\n=====DANH SACH LIEN KET SAU KHI TRON====="<<endl;
	printlist(l);
	//Tron 2 ds giam -> 1 ds tang 
	TronTang(l1,l2,l);
	cout<<"\n=====DANH SACH LIEN KET SAU KHI TRON====="<<endl;
	printlist(l);
	cout<<"\n";
	//2d
	elementtype pmin = 32767;
	cout<<"\nPhan tu nho nhat trong danh sach la: "<<min(l);
	elementtype pmax = -32767;
	cout<<"\nPhan tu lon nhat trong danh sach la: "<<max(l);
	cout<<"\n";
	//2e
	intuvitrimax(l);
	cout<<"\n";
	//2i
	int k;
	elementtype s=0;
	cout<<"\nNhap so k: ";
	cin>>k;
	cout<<"Tong so phan tu la boi cua "<<k<<" la: "<<TongBoiK(l,k);
}
