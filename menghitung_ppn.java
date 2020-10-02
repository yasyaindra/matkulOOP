import java.util.Scanner;

class Buku{
 String judul_buku;
 String pengarang_buku;
 int tahun;
 int harga;
 int jumlah_beli;
 int bayar;
 double ppn;
 int hitung_ppn;
 int total_harga;
 int uang_kembalian;

  public Buku(String judul_buku, String pengarang_buku, int tahun, int harga, int jumlah_beli, int bayar){
  this.judul_buku = judul_buku;
  this.pengarang_buku = pengarang_buku;
  this.tahun = tahun;
  this.harga = harga;
  this.jumlah_beli = jumlah_beli;
  if(jumlah_beli > 5){
   this.ppn = 0.05;
   this.hitung_ppn = (int)(this.ppn * (double)harga) ;
  }
  else if(jumlah_beli < 6){
   this.ppn = 0.2;
   this.hitung_ppn = (int)(this.ppn * (double)harga) ;
  }
  this.bayar = bayar; 
  this.total_harga = (int)((this.harga + hitung_ppn) * this.jumlah_beli);
  this.uang_kembalian = (int)(this.bayar - total_harga);
 }

  void showInfoBuku(){
  System.out.println("--- OUTPUT --- ");
  System.out.println("Judul Buku     : " +this.judul_buku);
  System.out.println("Pengarang Buku : "+this.pengarang_buku);
  System.out.println("Tahun Terbit   : "+this.tahun);
  System.out.println("Harga Buku     : "+this.harga);
  System.out.println("Jumlah dibeli  : "+this.jumlah_beli);
  System.out.println("Bayar          : "+this.bayar);
  System.out.println("Total Harga    : "+this.total_harga);
  System.out.println("Kembalian      : "+this.uang_kembalian);
 }
}

public class  MyBook{
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
  System.out.println("--- INPUT ---");
  System.out.print("Judul Buku     : ");
  String judul_buku = sc.nextLine();

  System.out.print("Pengarang Buku : ");
  String pengarang_buku = sc.nextLine();

  System.out.print("Tahun Terbit   : ");
  int tahun = sc.nextInt();

  System.out.print("Harga Buku     : ");
  int harga = sc.nextInt();

  System.out.print("Jumlah dibeli  : ");
  int jumlah_beli = sc.nextInt();

  System.out.print("Bayar          : ");
  int bayar = sc.nextInt();

  Buku Bukuku = new Buku(judul_buku, pengarang_buku, tahun, harga, jumlah_beli, bayar);
  Bukuku.showInfoBuku();
 }
}
