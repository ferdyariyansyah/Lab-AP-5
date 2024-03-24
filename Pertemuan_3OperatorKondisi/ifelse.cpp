#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char nilai;

    cout << "Berapa nilai kamu: ";
    cin >> nilai;

    if (nilai == 'A'){
        cout << "Bagus lulus, Pertahankan";
    } else if (nilai == 'B') {
        cout << "lulus tapi Tingkatkan";
    } else if (nilai == 'C') {
        cout << "lulus tingkatkan lagi";
    } else if (nilai == 'D') {
        cout << "Tidak lulus";
    } else if (nilai == 'E') {
        cout << "Bisaa...Bisa ga lulus niii"; 
    } else {
        cout << "invalid, silahkan input dengan benar";
    }
    
    return 0;
}