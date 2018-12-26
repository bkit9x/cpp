#include <iostream>
using namespace std;

main(){
	int n;
    do
    {
        cout<<"nhap n: ";
        cin>>n;
    } while (n<1||n>100);
    int i;
    int diemHung[n], diemCuong[n];
    int Hung=0, Cuong=0;
    cout<<"nhap diem Hung: ";
    for(i=0;i<n;i++){
        cin>>diemHung[i];
    }
    cout<<"nhap diem Cuong: ";
    for(i=0;i<n;i++){
        cin>>diemCuong[i];
    }

    for(i=0;i<n;i++){
        if(diemHung[i]>diemCuong[i])
            Hung++;
        else if(diemCuong[i]>diemHung[i])
            Cuong++;
    }
    cout<<"ti so Hung:Cuong = "<<Hung<<":"<<Cuong;
}


