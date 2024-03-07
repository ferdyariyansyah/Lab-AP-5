#include <iostream>
using namespace std;
 
int main()
{
  cout << "##  Program Biodata Mahasiswa  ##" << endl;
  cout << "=================================" << endl;
  cout << endl;
 
  string nama, nim, kom, ipk;

  system ("cls");
 
  cout << "Nama mahasiswa: ";
  getline(cin,nama);
 
  cout << "NIM: ";
  getline(cin,nim);
 
  cout << "Kom: ";
  getline(cin,kom);
 
  cout << "IPK: ";
  getline(cin,ipk);
 
  cout << endl;
 
  cout << "# Data Mahasiswa #"       << endl;
  cout << "=================="       << endl;
  cout << "Nama: "      << nama      << endl;
  cout << "NIM: "       << nim       << endl;
  cout << "Kom: "  << kom  << endl;
  cout << "IPK: "   << ipk   << endl;
 
  return 0;
}