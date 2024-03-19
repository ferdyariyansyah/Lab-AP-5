// Program ini menghitung luas permukaan dan volume bangun ruang kerucut.

#include <iostream> // pustaka untuk input/output
#include <cmath> // untuk memasukkan file header yang berisi deklarasi fungsi, definisi variabel, dan makro.

using namespace std; // Menyingkat std:: agar lebih mudah digunakan

int main() // Deklarasi variabel
{
  // untuk menghilangkan layar consol
  system("cls");

  // Deklarasi variabel untuk menyimpan jari-jari dan tinggi kerucut.
  double jariJari, tinggi;

  cout << "##=======================================##" << endl;
  cout <<    "Mengitung Luas Permukaan Dan Volume Kerucut" << endl;
  cout << "##=======================================##" << endl;

  // Meminta pengguna untuk memasukkan nilai jari-jari dan tinggi kerucut.
  cout << "Masukkan jari-jari kerucut: ";
  cin >> jariJari;
  cout << "Masukkan tinggi kerucut: ";
  cin >> tinggi;

  // Menghitung luas permukaan kerucut.
  double luasPermukaan = M_PI * jariJari * (jariJari + sqrt(tinggi * tinggi + jariJari * jariJari));

  // Menghitung volume kerucut.
  double volume = (1.0 / 3.0) * M_PI * jariJari * jariJari * tinggi;

  // Menampilkan hasil perhitungan luas permukaan dan volume kerucut.
  cout << "Luas permukaan kerucut: " << luasPermukaan << endl;
  cout << "Volume kerucut: " << volume << endl;

  return 0;
}
