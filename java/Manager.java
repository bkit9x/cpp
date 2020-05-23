/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package QuanLy2;

import java.util.Scanner;

/**
 *
 * @author PC-FIT
 */
public class Manager extends Person{
    private String chucVu;
    private float phuCapChucVu;
    private int thamNienCT;

    public Manager() {
    }

    public Manager(String chucVu, float phuCapChucVu, int thamNienCT, String maSo, String hoTen, String ngaySinh, String queQuan) {
        super(maSo, hoTen, ngaySinh, queQuan);
        this.chucVu = chucVu;
        this.phuCapChucVu = phuCapChucVu;
        this.thamNienCT = thamNienCT;
    }
    public void nhapmng(){
        Scanner scanner = new Scanner(System.in);
        super.nhap();
        System.out.println("nhập chức vụ: ");
        chucVu = scanner.nextLine();
        System.out.println("nhập phụ cấp chức vụ: ");
        phuCapChucVu = scanner.nextFloat();
        System.out.println("nhập thâm niên công tác: ");
        thamNienCT = scanner.nextInt();
    }
    public void xuatmng(){
        super.xuat();
        System.out.println("Chức vụ: "+chucVu);
        System.out.println("Phụ cấp chức vụ: "+phuCapChucVu);
        System.out.println("Thâm niên công tác: "+thamNienCT);
    }

    public String getChucVu() {
        return chucVu;
    }

    public int getThamNienCT() {
        return thamNienCT;
    }
    
}
