// Program ini menghitung luas permukaan dan volume bangun ruang prisma.

#include <iostream> //Pustaka untuk input/output
#include <cmath> // untuk memasukkan file header yang berisi deklarasi fungsi, definisi variabel, dan makro.

using namespace std; // Menyingkat std:: agar lebih mudah digunakan

// Deklarasi struct untuk menyimpan informasi tentang prisma
struct Prisma {
  double alas;
  double tinggiAlas;
  double tinggiPrisma;
};

// Fungsi untuk menghitung luas alas prisma
double hitungLuasAlas(Prisma prisma) {
  // Menghitung luas alas berdasarkan jenis alas
  if (prisma.alas == 3) {
    // Segitiga
    return 0.5 * prisma.tinggiAlas * prisma.alas;
  } else if (prisma.alas == 4) {
    // Segiempat
    return prisma.alas * prisma.tinggiAlas;
  } else {
    // Jenis alas tidak valid
    return -1;
  }
}

// Fungsi untuk menghitung luas selimut prisma
double hitungLuasSelimut(Prisma prisma) {
  return prisma.alas * prisma.tinggiPrisma;
}

// Fungsi untuk menghitung luas permukaan prisma
double hitungLuasPermukaan(Prisma prisma) {
  double luasAlas = hitungLuasAlas(prisma);
  double luasSelimut = hitungLuasSelimut(prisma);
  
  // Luas permukaan = 2 * luas alas + luas selimut
  return 2 * luasAlas + luasSelimut;
}

// Fungsi untuk menghitung volume prisma
double hitungVolume(Prisma prisma) {
  double luasAlas = hitungLuasAlas(prisma);
  
  // Volume = luas alas * tinggi prisma
  return luasAlas * prisma.tinggiPrisma;
}

int main() // Deklarasi variabel
{
  // Deklarasi variabel prisma
  Prisma prisma;

  // Untum menghilangkan layar consol
  system("cls");

  cout << "##======================================##" << endl;
    cout <<    "Mengitung Luas Permukaan Dan Volume Prisma" << endl;
  cout << "##======================================##" << endl;  

  // Meminta pengguna untuk memasukkan jenis alas
  int jenisAlas;
  cout << "Masukkan jenis alas prisma (3 untuk segitiga, 4 untuk segi empat): ";
  cin >> jenisAlas;
  prisma.alas = jenisAlas;

  // Meminta pengguna untuk memasukkan nilai alas dan tinggi alas
  cout << "Masukkan nilai alas: ";
  cin >> prisma.tinggiAlas;
  cout << "Masukkan nilai tinggi prisma: ";
  cin >> prisma.tinggiPrisma;

  // Menghitung luas permukaan dan volume prisma
  double luasPermukaan = hitungLuasPermukaan(prisma);
  double volume = hitungVolume(prisma);

  // Menampilkan hasil perhitungan
  cout << "Luas permukaan prisma: " << luasPermukaan << endl;
  cout << "Volume prisma: " << volume << endl;

  return 0;
}
