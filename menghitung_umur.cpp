#include <iostream>
#include <conio.h>

using namespace std;

struct old{
 int tanggal;
 int bulan;
 int tahun;
};
struct old umur;

struct target{
 int date;
 int month;
 int year;
};
struct target tua;

struct pencarian{
 int harinya;
 int bulannya;
 int tahunnya;
};
struct pencarian sekitar;

// FUNGSI INPUT
char input()
{
 cout<<" Tanggal Lahir Anda :"<<" ";
 cin>>umur.tanggal;
 cout<<" Bulan Lahir Anda   :"<<" ";
 cin>>umur.bulan;
 cout<<" Tahun Lahir Anda   :"<<" ";
 cin>>umur.tahun;
 cout<<endl;
 cout<<" Masukkan Tanggal Yang Anda Inginkan"<<endl;
 cout<<endl;
 cout<<" Tanggal            :"<<" ";
 cin>>tua.date;
 cout<<" Bulan              :"<<" ";
 cin>>tua.month;
 cout<<" Tahun              :"<<" ";
 cin>>tua.year;
 
 cout<<endl;
 
 system("pause");
 
 cout<<endl;
}

// FUNGSI OUTPUT
char output()
{
 if(umur.tanggal>tua.date)
 {
  if(umur.bulan>tua.month)
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   sekitar.tahunnya=sekitar.tahunnya-1;
   
   sekitar.bulannya=umur.bulan-tua.month;
   sekitar.bulannya=(12-sekitar.bulannya)-1;
   
   sekitar.harinya=umur.tanggal-tua.date;
   sekitar.harinya=30-sekitar.harinya;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
  
  else if(umur.bulan<tua.month)
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   
   sekitar.bulannya=tua.month-umur.bulan;
   sekitar.bulannya=sekitar.bulannya-1;
   
   sekitar.harinya=umur.tanggal-tua.date;
   sekitar.harinya=30-sekitar.harinya;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
  
  else
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   
   sekitar.bulannya=tua.month-umur.bulan;
   sekitar.bulannya=(12-sekitar.bulannya)-1;
   
   sekitar.harinya=umur.tanggal-tua.date;
   sekitar.harinya=30-sekitar.harinya;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
 }
 
 else if (umur.tanggal<tua.date)
 {
  if(umur.bulan>tua.month)
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   sekitar.tahunnya=sekitar.tahunnya-1;
   
   sekitar.bulannya=umur.bulan-tua.month;
   sekitar.bulannya=(12-sekitar.bulannya)-1;
   
   sekitar.harinya=tua.date-umur.tanggal;
   sekitar.harinya=30-sekitar.harinya;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
  
  else if(umur.bulan<tua.month)
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   
   sekitar.bulannya=tua.month-umur.bulan;
   
   sekitar.harinya=tua.date-umur.tanggal;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
  
  else
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   
   sekitar.bulannya=tua.month-umur.bulan;
   
   sekitar.harinya=tua.date-umur.tanggal;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
 }

 else
 {
  if(umur.bulan>tua.month)
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   sekitar.tahunnya=sekitar.tahunnya-1;
   
   sekitar.bulannya=umur.bulan-tua.month;
   sekitar.bulannya=12-sekitar.bulannya;
   
   sekitar.harinya=tua.date-umur.tanggal;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
  
  else if(umur.bulan<tua.month)
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   
   sekitar.bulannya=tua.month-umur.bulan;
   
   sekitar.harinya=tua.date-umur.tanggal;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
  
  else
  {
   sekitar.tahunnya=tua.year-umur.tahun;
   
   sekitar.bulannya=tua.month-umur.bulan;
   
   sekitar.harinya=tua.date-umur.tanggal;
   
   cout<<"Anda Lahir Pada    :"<<" "<<umur.tanggal<<"-"<<umur.bulan<<"-"<<umur.tahun<<endl;
   cout<<" Umur Anda Sekarang :"<<" "<<sekitar.tahunnya<<" Tahun"<<" "<<sekitar.bulannya<<" Bulan"<<" "<<sekitar.harinya<<" Hari"<<endl;
   cout<<" Pada               :"<<" "<<tua.date<<"-"<<tua.month<<"-"<<tua.year<<endl;
  }
 }
}

int main()
{
 cout<<input();
 cout<<output();
 
 getch();
}