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
public class Person_Manager {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n,m;        
        do {
            System.out.println("Nhập n: ");
            n = scanner.nextInt();
        } while (n<=0 || n>100);
        Person person[] = new Person[n];
        for (int i = 0; i < n; i++) {
            person[i] = new Person();
            System.out.println("Nhập thông tin Person thứ "+(i+1));
            person[i].nhap();
        }
        do {
            System.out.println("\nNhập m: ");
            m = scanner.nextInt();
        } while (m<=0 || m>100);
        Manager manager[] = new Manager[m];
        for (int i = 0; i < m; i++) {
            manager[i] = new Manager();
            System.out.println("Nhập thông tin Manager thứ "+(i+1));
            manager[i].nhapmng();
        }

        System.out.println("Hai danh sach vua nhap :");
        System.out.println("Danh sách Person:");
        for (int i = 0; i < n; i++) {
            person[i].xuat();
        }

        System.out.println("Danh sách Manager:");
        for (int i = 0; i < m; i++) {
            manager[i].xuatmng();
        }
        System.out.println("Thông tin các trưởng phòng có quê quán ở Cần Thơ và công tác ít nhất 10 năm là:");
        for (int i = 0; i < m; i++) {
            if(manager[i].getChucVu().equalsIgnoreCase("truong phong") && manager[i].getQueQuan().equalsIgnoreCase("can tho")
&& manager[i].getThamNienCT()>=10){
                manager[i].xuatmng();
            }
        }
    }
}
