/*
Cho Lop Cán bo
- Thuoc tính: Ma CB, Hoten, Na sinh, Lcb
- Phuong thuc:
-- Hàm tao có doi và ko doi
-- Nhap và in
-- Quá tai toán tu nhap,xuat 
-- Cho Lop Cán Bo Giang Day ke thua Lop Cán bo
 	--- Thuoc tính: Thêm thuoc tính Phu cap giang day
	--- Phuong thuc: 
		---- Hàm tao có doi và ko doi 
		---- Nhap và xuat
		---- Tính luong cán bo giang day
Hàm Main():
- Su dung quá tai toán tu
- Nhap và in danh sách cán bo 
- In ra cán bo có tong luong cao nhat 

*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
//Lop Can bo
class Canbo
{
	public:
		char MCB[90], hoten[40];
		int namsinh;
		float luongcb;
	public:
		//Ham tao khong doi so
		Canbo() {};
		//Ham tao co doi so
		Canbo(char mcb[9], char ht[40], int ns, float lcb)
		{
			strcpy(MCB,mcb);
			strcpy(hoten,ht);
			namsinh = ns;
			luongcb = lcb;
		}
		//Ham nhap thong tin Can bo
		void Nhapcb()
		{
			cout<<" - Nhap Ma CB: ";
			cin.ignore(1);
			cin.getline(MCB,9);
			cout<<" - Nhap Ho ten CB: ";
			cin.getline(hoten,40);
			cout<<" - Nhap nam sinh CB: ";
			cin>>namsinh;
			cout<<" - Nhap luong CB: ";
			cin>>luongcb;
		}
		//Ham in thong tin Can bo
		void Incb()
		{
			cout<<" - Ma CB: "<<MCB<<endl;
			cout<<" - Ho ten CB: "<<hoten<<endl;
			cout<<" - Nam sinh CB: "<<namsinh<<endl;
			cout<<" - Luong CB: "<<luongcb<<endl;
		}
//		friend istream & operator >> (istream &i, Canbo &b);
//		friend ostream & operator << (ostream &o, Canbo &b);	
};
//Qua tai toan tu nhap
/*
istream & operator >> (istream &is, Canbo &b)
{
	cout<<" - Nhap Ma CB: ";
	cin.ignore(1);
	is>>b.MCB;
	cout<<" - Nhap Ho ten CB: ";
	is>>b.hoten;
	cout<<" - Nhap nam sinh CB: ";
	is>>b.namsinh;
	cout<<" - Nhap luong CB: ";
	is>>b.luongcb;
	cout<<endl;
	return is;
}
//Qua tai toan tu xuat
ostream & operator << (ostream &o, Canbo &b)
{
	os<<" - Ma CB: "<<b.MCB<<endl;
	cout<<" - Ho ten CB: "<<b.hoten<<endl;
	cout<<" - Nam sinh CB: "<<b.namsinh<<endl;
	cout<<" - Luong CB: "<<b.luongcb<<endl;
}
*/
//Lop CBGD ke thua lop Canbo
class CBGD : public Canbo
{
	private:
		float phucap;
	public:
		//Ham tao khong doi so
		CBGD() : Canbo() {};
		//Ham tao co doi so
		CBGD(float pc, char mcb[9], char ht[40], int ns, float lcb) : Canbo(mcb,ht,ns,lcb)
		{
			phucap=pc;
		}
		//Ham nhap CBGD ke thua Canbo
		void NhapCBGD()
		{
			do{
				cout<<" - Nhap phu cap giang day (<=0): ";
				cin>>phucap;
			}while(phucap<=0);
			cout<<endl;
		}
		//Ham in CBGD ke thua Canbo
		void InCBGD()
		{
			cout<<" - Phu cap giang day: "<<phucap<<endl;
			cout<<endl;
		}
		//Ham tinh luong CBGD
		float LuongCBGD()
		{
			return luongcb + (luongcb*phucap);
		}
//		friend istream & operator >> (istrea &i, CBGD &c);
};
//Qua tai toan tu nhap xuat
/*
istream & operator >> (istream &i, CBGD &c)
{
	cout<<" - Nhap phu cap: ";
	is>>
}
*/
//HAM MAIN
main()
{
	int i,n;
	do{
		cout<<"Nhap so luong can bo: ";
		cin>>n;
	}while(n<=0);
	CBGD cb[n];
//Nhap thong tin n can bo
	cout<<"===NHAP THONG TIN CAN BO==="<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Nhap thong tin can bo thu "<<i+1<<endl;
		cb[i].Nhapcb();
		cb[i].NhapCBGD();
	}
//In thong tin can bo
	cout<<"===IN THONG TIN CAN BO GIANG DAY==="<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Thong tin can bo thu "<<i+1<<endl;
		cb[i].Incb();
		cb[i].InCBGD();
	}
//3. Can bo co luong cao nhat
	cout<<"Can bo giang day co luong cao nhat la: "<<endl;
	float max=cb[0].LuongCBGD();
	for(i=1;i<n;i++)
		if(cb[i].LuongCBGD() > max)
			max=cb[i].LuongCBGD();
	for(i=0;i<n;i++)
		if(cb[i].LuongCBGD() == max)
		{
			cb[i].Incb();
			cb[i].InCBGD();
		}
	cout<<" - Tien luong CBGD lanh: "<<max;
}
