#include <iostream>
using namespace std;

int main() {
    system("cls");
    string nama;
  int gajiPokok, tunjanganAnak, pajak, totalGaji;
  int golongan, jumlahAnak;
  cout << "Masukan nama : ";
  getline(cin, nama);
  cout << nama << endl;
  // Input golongan
  cout << "Masukkan Golongan (1, 2, atau 3): ";
  cin >> golongan;

  // Input gaji pokok berdasarkan golongan
  switch (golongan) {
    case 1:
      gajiPokok = 5000000;
      break;
    case 2:
      gajiPokok = 3000000;
      break;
    case 3:
      gajiPokok = 2500000;
      break;
    default:
      cout << "Golongan tidak valid!" << endl;
      return 1;
  }

  // Input jumlah anak
  cout << "Masukkan jumlah anak: ";
  cin >> jumlahAnak;

  // Hitung tunjangan anak
  if (jumlahAnak <= 2) {
    tunjanganAnak = 500000;
  } else {
    tunjanganAnak = 750000;
  }

  // Hitung pajak
  pajak = gajiPokok * 0.05;

  // Hitung total gaji
  totalGaji = gajiPokok + tunjanganAnak - pajak;

  // Output total gaji
  cout << "Total gaji yang diterima: Rp" << totalGaji << endl;

  return 0;
}
