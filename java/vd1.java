package javaapplication1;
import java.util.Scanner;
interface HCNInterface{
    float dienTichHCN();
    float getChieuDai();
    float getChieuRong();    
}
class hinhChuNhat implements HCNInterface{
    private float chieuDai;
    private float chieuRong;
    public float dienTichHCN(){
        return chieuDai*chieuRong;
    }
    public float getChieuDai(){
        return chieuDai;
    }
    public float getChieuRong(){
        return chieuRong;
    }
    public void nhap(){
        Scanner inp = new Scanner(System.in);
        System.out.print("\n nhap chieu dai: ");
        this.chieuDai = inp.nextFloat();
        System.out.print("nhap chieu rong: ");
        this.chieuRong = inp.nextFloat();        
    }
}
class HCNTest extends hinhChuNhat{
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("nhap n: ");
        int n = inp.nextInt();
        hinhChuNhat dshcn[] = new hinhChuNhat[n];
        //nhap chieu dai, chieu rong cho ds n hinh chu nhat
        for(int i=0; i<n; i++){
            dshcn[i] = new hinhChuNhat();
            System.out.print("\nnhap chieu dai, chieu rong cho hinh chu nhat thu "+(i+1)+": ");
            dshcn[i].nhap();            
        }
        //in chieu dai, chieu rong, dien tich cua ds n hinh chu nhat
        for(int i=0; i<n; i++){
            System.out.print("\nchieu dai, chieu rong, dien tich hinh chu nhat thu "+(i+1)+" lan luot la: ");
            System.out.print(dshcn[i].getChieuDai()+","+dshcn[i].getChieuRong()+","+dshcn[i].dienTichHCN());
        }
        //in thong tin hinh chu nhat co dien tich lon nhat
        float max = dshcn[0].dienTichHCN();

        for(int i=1; i<n; i++)
            if(max<dshcn[i].dienTichHCN())
                max = dshcn[i].dienTichHCN();

        System.out.print("\nhinh chu nhat co dien tich lon nhat = "+max+" : ");
        for(int i=0; i<n; i++){
            if(dshcn[i].dienTichHCN()==max){
                System.out.print("\nvi tri thu "+(1+i)+", chieu dai: "+dshcn[i].getChieuDai()+", chieu rong: "+dshcn[i].getChieuRong());                
            }
        }

    }
    
}
