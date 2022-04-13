#include<iostream>
#include<fstream>
using namespace std;

class input{
public:
  void hitung(){
    cout<<"Masukkan jumlah bulan : "; cin>>jmlh_bln;
    cout<<"Masukkan uang tabungan : "; cin>>tabungan;
    cout<<"Masukkan uang saku : "; cin>>uang_saku;
    cout<<"Masukkan total keluar :"; cin>>uang_keluar;
}
void toFile(){
  tulis_data.open("../pra_data/input.txt");
  tulis_data<<jmlh_bln<<endl;
  tulis_data<<tabungan<<endl;
  tulis_data<<uang_saku<<endl;
  tulis_data<<uang_keluar<<endl;
  tulis_data.close();
}
private:
ofstream tulis_data;
int uang_saku,tabungan,uang_keluar,jmlh_bln;
};