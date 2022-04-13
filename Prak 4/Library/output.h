#include<iostream>
#include<fstream>
using namespace std;

class output{
public:
  void hitung(){
    cout<<"Pengeluaran Perbulan : "<<data_file[0]<<endl;
    cout<<"Jumlah Bulan         : "<<data_file[1]<<endl;
    cout<<"Jumlah Tabungan      : "<<data_file[2]<<endl;
  }

  void getData(){
    ambil_data.open("../Dummy/out_proses.txt");
    while(!ambil_data.eof()){
      ambil_data >> data_file[index];
      index += 1;
  }
   ambil_data.close();
}
private:
  ifstream ambil_data;
  string data_file[40];
  int index = 0;
};