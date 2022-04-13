#include<iostream>
#include<fstream>
#include"../Library/proses.h"

int main(){
  Proses proses;
  proses.getData();
  proses.toFile();
  proses.hitung();
  return 0;
  }