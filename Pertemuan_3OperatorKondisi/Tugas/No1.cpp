#include <iostream>

using namespace std;

int main() {
  // Mendeklarasikan variabel untuk menyimpan bilangan yang dimasukkan pengguna
  int bilangan;

    system("cls");

  // Meminta pengguna untuk memasukkan bilangan
  cout << "##=========================================##" << endl;
  cout << "Program Menentukan Bilangan Genap atau Ganjil" << endl;
  cout << "##=========================================##" << endl;
  cout << "Masukkan sebuah bilangan bulat: ";
  cin >> bilangan;
  cout << endl;

  // Menentukan apakah bilangan genap atau ganjil dengan menggunakan operator modulo
  if (bilangan%2==0) {
    // Bilangan genap
    cout << bilangan << " merupakan bilangan genap." << endl;
  } else {
    // Bilangan ganjil
    cout << bilangan << " merupakan bilangan ganjil." << endl;
  }

  return 0;
}
