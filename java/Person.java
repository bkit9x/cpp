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
public class Person {
    private String maSo;
    private String hoTen;
    private String ngaySinh;
    private String queQuan;

    public Person() {
    }

    public Person(String maSo, String hoTen, String ngaySinh, String queQuan) {
        this.maSo = maSo;
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
        this.queQuan = queQuan;
    }
    public void nhap(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("nhập mã số: ");
        maSo = scanner.nextLine();
        System.out.println("nhập họ và tên: ");
        hoTen = scanner.nextLine();
        System.out.println("nhập ngày sinh: ");
        ngaySinh = scanner.nextLine();
        System.out.println("nhập quê quán: ");
        queQuan = scanner.nextLine();
    }
    public void xuat(){
        System.out.println("Mã số: "+maSo);
        System.out.println("Họ và tên: "+hoTen);
        System.out.println("Ngày sinh: "+ngaySinh);
        System.out.println("Quê quán: "+queQuan);        
    }

    public String getQueQuan() {
        return queQuan;
    }
    
}
