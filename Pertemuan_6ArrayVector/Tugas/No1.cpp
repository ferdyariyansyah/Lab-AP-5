#include <iostream>
#include <limits>
using namespace std;

int main() {
    system("cls");

    int ukuranSegitiga;
    cout << "##=============================##" << endl;
    cout << "Masukkan Ukuran Segitiga Pascal : ";
    cin >> ukuranSegitiga;
    cout << "##=============================##" << endl;
    int elemen [ukuranSegitiga][ukuranSegitiga];
    cout << endl;

    for (int i = 1; i <= ukuranSegitiga; i++) {
        for (int j = 0; j <= ukuranSegitiga-i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i) {
                elemen [i][k] = 1;
            }
            else {
                elemen [i][k] = elemen [i-1][k-1] + elemen [i-1][k];
            }
            cout << elemen [i][k] << " ";
        }
        cout << endl;
    }    

    cout << endl;
    int x,y;
    cout << "Catatan : ( 1 <= x,y <= 30 | x,y <= " << ukuranSegitiga << " )" << endl;
    cout << "Masukkan Nilai x dan y : ";
    cin >> x >> y;
 

    while (x < 1 || x > 30 || y < 1 || y > 30 || y > x || x > ukuranSegitiga || y > ukuranSegitiga)
    {
        cout << endl;
        cout << "Catatan: ( 1 <= x,y <= 30 | y <= x | x,y <= " << ukuranSegitiga << " )" << endl;
        cout << "Masukkan Nilai x dan y : ";       
        cin >> x >> y;
    }

    cout << endl;
    cout << "Hasil : " << elemen [x][y] << endl;
    cout << "Berikut Hasil Dari Inputan Yang diberikan" << endl;
    cout << "##=========================================##" << endl;
    cout << "Terima Kasih Telah Menggunakan Program Ini" << endl;
    cout << "##=========================================##" << endl;
    return 0;
}