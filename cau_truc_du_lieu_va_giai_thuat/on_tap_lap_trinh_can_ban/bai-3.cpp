#include <iostream>
using namespace std;
//nhap phan tu cho mang
void nhap(float a[50][50], int m, int n){
	cout<<"\nnhap ma tran:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            cout<<"nhap phan tu: ";
            cin>>a[i][j];
        }
}

//in ma tran
void in(float a[50][50], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
}

//tong 2 mang
void add(float a[50][50], float b[50][50], float c[50][50], int m, int n){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
			c[i][j] = a[i][j]+b[i][j];
}

bool array_cmp(float a[50][50], float b[50][50], int m, int n){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
			if(a[i][j]!=b[i][j]) return false;
	return true;
}

main(){
    float a[50][50], b[50][50], c[50][50];
    int n, m;
    cout<<"nhap kich thuoc cua mang: ";
    cin>>m>>n;

    //nhap mang a
    nhap(a, m, n);
    //in mang a
    in(a, m, n);

	//nhap mang b
    nhap(b, m, n);
    //in mang
    in(b, m, n);
    
	// tong 2 mang
	add(a,b,c,m,n);
	cout<<"tong 2 ma tran:\n";
	in(c, m, n);
	
	//kiem tra 2 na tran bang nhau
	cout<<"hai ma tran "<<(array_cmp(a,b,m,n) ? "bang" : "khong bang")<<" nhau.\n";
}
