#include<iostream>
using namespace std;

struct node
{
	int vitri;
	int khoa;
	node* next;
};

class list
{
private:
	node* head;
public:
	list()
	{
		head = NULL;
	}
	void add(int a, int b)
	{
		node* t = head;
		node* temp = new node();
		temp->vitri = a;
		temp->khoa = b;
		if (t == NULL)
		{
			temp->next = NULL;
			head = temp;
		}
		else
		{
			while (t->next != NULL)
			{
				t = t->next;
			}
			temp->next = t->next;
			t->next = temp;
		}
		return;
	}
	void sort()
	{
		int a_khoa, a_vitri, b_khoa, b_vitri;
		int pos = 1, i;
		node* t = head;
		node* p;
		while (1)
		{
			p = head;
			a_vitri = t->vitri;
			a_khoa = t->khoa;
			t = t->next;
			if (t == NULL)
				break;
			b_vitri = t->vitri;
			b_khoa = t->khoa;
			if ((b_vitri < a_vitri) || (b_khoa < a_khoa))
			{
				i = pos;
				while (p->vitri < b_vitri)
				{
					p = p->next;
					i--;
				}
				while ((p->khoa < b_khoa) && (p->vitri == b_vitri))
				{
					p = p->next;
					i--;
				}
				while (i--)
				{
					a_vitri = p->vitri;
					a_khoa = p->khoa;
					p->vitri = b_vitri;
					p->khoa = b_khoa;
					b_vitri = a_vitri;
					b_khoa = a_khoa;
					p = p->next;
				}
				p->vitri = b_vitri;
				p->khoa = b_khoa;
			}
			pos++;
		}
	}
	void print()
	{
		node* t = head;
		while (t != NULL)
		{
			cout << t->vitri << ":" << t->khoa << "  ";
			t = t->next;
		}
	}
};
int main()
{
	list l;
	int a, b;
	char ch = 'y';
	while (ch == 'y')
	{
		cout << "Nhập vị trí: ";
		cin >> a;
		cout << "Nhập key cho bin: ";
		cin >> b;
		l.add(a, b);
		cout << "Nhập thêm bin mới?: ";
		cin >> ch;
	}
	cout << "List : "; l.print();
	l.sort();
	cout << "\nList đã sắp xếp : "; l.print();
	return 0;
}
