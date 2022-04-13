#include<iostream>
#include<fstream>
using namespace std;

class Proses{
public:
 void hitung(){
   cout<<"Anda sebagai proses \n";
 }
void getData(){
  ambil_data.open("api_data.txt");
  bool jumlah_bulan = true;
  bool uang_tabungan = true;
  bool uang_saku = true;
  bool total_keluar = true;
  while(!ambil_data.eof()){
    if (jumlah_bulan){
      ambil_data>>jmlh_bln;
      jumlah_bulan = false;
    }
    else if (tabungan){
      ambil_data>>tabungan;
      uang_tabungan = false;
    }
    else if(uang_saku){
      ambil_data>>uang_saku;
      uang_saku = false;
    }
    else{
      ambil_data>>total_keluar;
    }
  ambil_data.close();

  void toFile();
    for(int i = 1; i <= bulan; i++){
      cout<<"Masukkan Pengeluaran Bulan Ke "<<i; cin>>jmlh_bln;
      uang_keluar += jumlah_bulan;
    }  

    int tabungan = uang_saku - uang_keluar;

    tulis_data.open("api_data.txt");
    tulis_data << uang_saku <<endl;
    tulis_data << uang_keluar <<endl;
    tulis_data << tabungan <<endl;
    tulis_data.close();
    }
private:
    ifstream ambil_data;
    ofstream tulis_data;
    int uang_saku = 2000000;
    int uang_keluar;
    int tabungan;
  
};