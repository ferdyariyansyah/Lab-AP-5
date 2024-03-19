#include <iostream> // Pustaka untuk input/output
using namespace std; // Menyingkat std:: agar lebih mudah digunakan

int main() //Deklarasi Variabel 
{

    system("cls"); // untuk menghapus layar consol

    // deklarasi variabel
    int operand1 = 3;  // operan pertama
    int operand2 = 1;  // operand kedua
    int NilaiK = 7;     // Nilai yang ditetapkan ke variabel K
    int NilaiL = 1;     // Nilai yang ditetapkan ke variabel L
    int NilaiC = 9;     // Nilai yang ditetapkan ke variabel C
    int NilaiU = 5;     // Nilai yang ditetapkan ke variabel U
    int NilaiS = 6;     // Nilai yang ditetapkan ke variabel S

    // Penghitungan ekspresi menggunakan nilai yang telah ditetapkan
    bool Hasil = (operand1 - operand2 < NilaiK) ||
                  (NilaiK - NilaiU < 8 + 2) &&
                  (NilaiL + 7 >= 9 + NilaiS);

    // Tampilkan hasil nya dalam bentuk boolean
    cout << boolalpha << Hasil << endl;

    return 0;
}
