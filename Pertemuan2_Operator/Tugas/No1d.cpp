// Pustaka untuk input/output
#include <iostream>

// Menyingkat std:: agar lebih mudah digunakan
using namespace std;

// Deklarasi variabel
int main() 
{
  // untuk menghapus layar consol
  system("cls");
  // Deklarasi variabel dengan tipe data dan nilai awal
  int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;

  // Perhitungan bitwise dengan operator | (OR), & (AND), ^ (XOR), dan << (shift left)
  // Perhitungan dilakukan dari kiri ke kanan
  // Hasil akhir disimpan dalam variabel `hasil` bertipe `int`
  int hasil = (i | k) & l ^ (3 << 2);

  // Mencetak nilai variabel `hasil` ke konsol
  cout << hasil << endl;

  // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
  return 0;
}
