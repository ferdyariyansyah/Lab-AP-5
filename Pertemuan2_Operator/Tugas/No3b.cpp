// Program ini menghitung luas permukaan dan volume bangun ruang limas segitiga.

#include <iostream> // Pustaka untuk input/output
#include <cmath> // untuk memasukkan file header yang berisi deklarasi fungsi, definisi variabel, dan makro.

using namespace std; // Menyingkat std:: agar lebih mudah digunakan

int main() // Deklarasi variabel
{
  // Deklarasi variabel untuk alas segitiga, tinggi segitiga, dan tinggi limas.
  double alas, tinggiSegitiga, tinggiLimas;

  // untuk menghilangkan layar consol
  system("cls");

  cout << "##==============================================##" << endl;
    cout <<    "Mengitung Luas Permukaan Dan Volume Limas Segitiga" << endl;
  cout << "##==============================================##" << endl;

  // Meminta pengguna untuk memasukkan nilai alas, tinggi segitiga, dan tinggi limas.
  cout << "Masukkan alas segitiga: ";
  cin >> alas;
  cout << "Masukkan tinggi segitiga: ";
  cin >> tinggiSegitiga;
  cout << "Masukkan tinggi limas: ";
  cin >> tinggiLimas;

  // Menghitung luas alas segitiga.
  double luasAlas = 0.5 * alas * tinggiSegitiga;

  // Menghitung luas selimut limas.
  double kelilingAlas = 3 * alas;
  double luasSelimut = kelilingAlas * tinggiLimas / 2;

  // Menghitung luas permukaan limas.
  double luasPermukaan = luasAlas + luasSelimut;

  // Menghitung volume limas.
  double volume = (1.0 / 3.0) * luasAlas * tinggiLimas;

  // Menampilkan hasil perhitungan luas permukaan dan volume limas.
  cout << "Luas permukaan limas: " << luasPermukaan << endl;
  cout << "Volume limas: " << volume << endl;

  return 0;
}
