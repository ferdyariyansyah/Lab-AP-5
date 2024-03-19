// Pustaka untuk input/output
#include <iostream>

// Menyingkat std:: agar lebih mudah digunakan
using namespace std;

// Deklarasi variabel
int main() 
{
  //untuk menghapus layar consol
  system("cls");
  // Deklarasi variabel dengan tipe data dan nilai awal
  int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;

  // Perhitungan logika menggunakan operator && (AND) dan || (OR)
  // Perhitungan di dalam kurung dilakukan terlebih dahulu
  // Hasil akhir disimpan dalam variabel `hasil` bertipe `bool`
  bool hasil = (l % 3 > u) && ((c / u < s) || (3 * i - k > 0));

  // Mencetak nilai variabel `hasil` ke konsol
  // `boolalpha` digunakan untuk menampilkan nilai `true` dan `false`
  // bukan sebagai angka 1 dan 0
  cout << boolalpha << hasil << endl;

  // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
  return 0;
}
