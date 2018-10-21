#include <iostream>
using namespace std;
//kiem tra so nguyen to
bool snt(int n){
	if(n<2) return false;
	for(int i=2; i<=n/2; i++){
		if(n%i==0)
			return false;
	}
	return true;	
}
//kiem tra so nguyen to su dung de quy
bool snt_dq(int n, int i){
	if(n<2) return false;
	else
		return (n == i) ? true : (n%i == 0) ? false : snt_dq(n, i + 1);
}

//tim UCLN
int ucln(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}	

//tim ucln de quy
int ucln_dq(int a, int b) {
    if (b == 0) return a;
    return ucln_dq(b, a % b);
}
//tim bcnn
long bcnn(int a, int b){
	long rs = a*b;
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	rs = rs/a;
	return rs;
}

//sap xep mang theo thu tu tang dan
void sapxep(float a[50], int n){
	float tmp;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
}

main(){
	int n, m;
	float arr[50];
	do{
		cout<<"nhap n: ";
		cin>>n;
	} while(n<1);
	
	//kiem tra n co phai so nguyen to hay khong
	if(snt(n))
		cout<<n<<" la so nguyen to ";
	else cout<<n<<" khong phai la so nguyen to ";

	/* su dung de quy
	//kiem tra n co phai so nguyen to hay khong
	if(snt_dq(n, 2))
		cout<<n<<" la so nguyen to";
	else cout<<n<<" khong phai la so nguyen to ";
	*/	

	cout<<"\n tim UCLN:\n";
	do{
		cout<<"nhap 2 so nguyen duong: ";
		cin>>m>>n;
	} while(n<1 || m<1);
	
	//tim ucln
	cout<<"\nucln cua "<<m<<" va "<<n<<" la: "<<ucln(m,n);
	
	/*
	//tim ucln su dung de quy
	cout<<"\nucln cua "<<m<<" va "<<n<<" la: "<<ucln_dq(m,n);
	*/
	//tim bcnn
	cout<<endl<<"BCNN: "<<bcnn(m,n)<<endl;

	//sap xep mang	
    cout<<"nhap kich thuoc cua mang: ";
    cin>>n;
    //nhap mang 
	cout<<"\nnhap ma tran:\n";
    for(int i = 0; i < n; i++){
            cout<<"nhap phan tu: ";
            cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
            cout<<arr[i];    

    //sap xep
    sapxep(arr,n);
    //in mang da sap xep
    for(int i = 0; i < n; i++)
            cout<<arr[i];    
}


