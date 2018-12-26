/*
Cho Lop Nguoi
- Thuoc tinh: Hoten, Namsinh
- Phuong thuc:
	+ Hàm tao có ðoi so
	+ Nhap, xuat
	+ Quá tai toán tu so sánh 2 ðoi tuong
Cho Lop Sinh viên ke thua lop Nguoi
- Thuoc tính: Thêm MSSV,ÐLT,ÐTH,loai rèn
- Phuong thuc:
	+Hàm tao có ðoi so
	+Nhap,xuat
	+Neu ðiem rèn = A thi ÐTC=ÐLT+ÐTH+1.5
       nguoc lai neu ðiem rèn = B thi ÐTC=ÐLT+ÐTH+1
                       nguoc lai ÐTC=ÐLT+ÐTH
HÀM MAIN:
- Su dung quá tai toán tu
- In danh sách n sinh viên
- In ra sinh viên có ÐTC lon nhat
*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Nguoi{
	public:
		char hoTen[100];
		int namSinh;
	public:
		Nguoi(){
		}
		Nguoi(char ht[100], int nsinh){
			strcpy(hoTen, ht);
			namSinh = nsinh;
		}
		void nhapNguoi(){
			cout<<"\nNhap ho ten: ";
			cin.ignore(1);
			cin.getline(hoTen,60);
			cout<<"\nNhap nam sinh: ";
			cin>>namSinh;
		}
		void inNguoi(){
			cout<<"\nHo va ten la: "<<hoTen<<"\n";
			cout<<"\nNam sinh la: "<<namSinh<<"\n";
		}
	bool operator>(Nguoi b){
		if(namSinh<b.namSinh)
			return true;
		return false;
	}
	bool operator=(Nguoi b){
		if(namSinh=b.namSinh)
			return true;
		return false;
	}
	bool operator<(Nguoi b){
		if(namSinh>b.namSinh)
			return true;
		return false;
	}
};

class sinhVien : public Nguoi{
	private:
		char mssv[20], loaiRen[2];
		float dlt, dth;
	public:
		sinhVien(): Nguoi(){
		}

		sinhVien(char ms[20],char lren[2],float lt,float th,char ht[60],int nsinh): Nguoi(ht,nsinh){
			strcpy(mssv,ms);
			strcpy(loaiRen,lren);
			dlt = lt;
			dth = th;
		}
		void nhapSV(){
			cout<<"\nNhap mssv: ";
			cin.ignore(1);
			cin.getline(mssv,20);
			cout<<"\nNhap loai ren: ";
			cin.ignore(0);
			cin.getline(loaiRen,2);
			cout<<"\nNhap diem ly thuyet: ";
			cin>>dlt;
			cout<<"\nNhap diem thuc hanh: ";
			cin>>dth;
		}
		void inSV(){
			cout<<"\nMSSV la: "<<mssv<<"\n";
			cout<<"\nLoai ren la: "<<loaiRen<<"\n";
			cout<<"\nDiem ly thuyet la: "<<dlt<<"\n";
			cout<<"\nDiem thuc hanh la: "<<dth<<"\n";
		}
		float Diem(){
			if(loaiRen[0] == 'A')
				return ( dlt + dth + 1.5);
			else
				if(loaiRen[0]=='B')
					return (dlt + dth + 1);
				else
					return (dlt + dth); 
		}
};
main()
{
	int n,i;
//su dung qua tai toan tu
	Nguoi a("Nguyen Van A",1999), b("Nguyen Van B", 1998);
	if(a<b)
		cout<<a.hoTen<<"<"<<b.hoTen;
	else
		if(a>b)
			cout<<a.hoTen<<">"<<b.hoTen;
		else
			cout<<a.hoTen<<"="<<b.hoTen;
//

//in danh sach n SV	
	cout<<"\nNhap n: ";
	cin>>n;
	sinhVien sv[n];
	for(i=0; i<n; i++){
		sv[i].nhapNguoi();	
		sv[i].nhapSV();	
	}
	float max = sv[0].Diem();
	for(i=1; i<n; i++){
		if(sv[i].Diem()>max)
			max = sv[i].Diem();
	}
	cout<<"\n================\nDanh sach sinh vien: \n";	
	for(i=0; i<n; i++){
			sv[i].inNguoi();
			sv[i].inSV();
			cout<<endl;
		}

	cout<<"\n================\nSinh vien co diem lon nhat: \n";	
	for(i=0; i<n; i++){
		if(sv[i].Diem()==max){
			sv[i].inNguoi();
			sv[i].inSV();
			cout<<endl;
		}
	}
}
