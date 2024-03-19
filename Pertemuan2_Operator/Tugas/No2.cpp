// Pustaka untuk input/output
#include <iostream>

// Pustaka untuk fungsi matematika
#include <cmath>

// Menyingkat std:: agar lebih mudah digunakan
using namespace std;

// Deklarasi variabel
int main() 
{
  // Untuk menghilangkan layar consol
  system("cls");

  // Deklarasi variabel untuk koefisien persamaan kuadrat
  double A, B, C;

  // Menghitung diskriminan (B^2 - 4AC)
  double hasil = (B * B - 4 * A * C);

  // Meminta masukan nilai koefisien dari pengguna
  cout << "##====================================================================================##" << endl;
  cout <<    "Menghitung Nilai Akar Akar Persamaan Suatu Persamaan Quadrat Menggunakan Rumus ABC" << endl;
  cout << "##====================================================================================##" << endl;
  cout << "Masukkan nilai A: ";
  cin >> A;
  cout << "Masukkan nilai B: ";
  cin >> B;
  cout << "Masukkan nilai C: ";
  cin >> C;

  // Memeriksa apakah persamaan memiliki akar real
  if (hasil < 0) {
    // Menampilkan pesan error jika tidak memiliki akar real
    cout << "Error, persamaan tidak memiliki akar real." << endl;
  } else {
    // Menghitung akar-akar persamaan
    double x1 = (-B + sqrt(hasil)) / (2 * A);
    double x2 = (-B - sqrt(hasil)) / (2 * A);

    // Menampilkan nilai akar-akar persamaan
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }

  // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
  return 0;
}
