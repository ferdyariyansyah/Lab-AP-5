// Program ini menghitung luas permukaan dan volume bangun ruang bola.

#include <iostream> // Pustaka untuk input/output
#include <cmath> // untuk memasukkan file header yang berisi deklarasi fungsi, definisi variabel, dan makro.

using namespace std; // Menyingkat std:: agar lebih mudah digunakan

int main() // Deklarasi Variabel
{
  // Deklarasi variabel untuk jari-jari bola.
  double jariJari;

  // Untuk menghilangkan layar consol
  system("cls");

  cout << "##====================================##" << endl;
    cout <<    "Mengitung Luas Permukaan Dan Volume Bola" << endl;
  cout << "##====================================##" << endl;

  // Meminta pengguna untuk memasukkan nilai jari-jari bola.
  cout << "Masukkan jari-jari bola: ";
  cin >> jariJari;

  // Menghitung luas permukaan bola.
  double luasPermukaan = 4 * M_PI * pow(jariJari, 2.0);

  // Menghitung volume bola.
  double volume = (4.0 / 3.0) * M_PI * pow(jariJari, 3.0);

  // Menampilkan hasil perhitungan luas permukaan dan volume bola.
  cout << "Luas permukaan bola: " << luasPermukaan << endl;
  cout << "Volume bola: " << volume << endl;

  return 0;
}
