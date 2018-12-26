#include <iostream>
using namespace std;
int tongcacso(int c){
    if(c<10)
        return c;
    return (c%10)+tongcacso(int(c/10));
}
main(){
    int n;
    do
    {
        cout<<"nhap n: ";
        cin>>n;
    } while (n<1 || n>1000000);
    int sum;
    for(int i=1; i<=n; i++){
        if(tongcacso(i)%10==9){
            sum+=i;
        }
    }
    cout<<"tong cac so chin nut: "<<sum;
}
