/*#include <iostream>
using namespace std;

int main() {
    system("CLS"); // short cout nya shift + tanda panah + bloc dengan ctrl D ganti    
    
    int umur;

    cout << "Berapa umur kamu: ";
    cin >> umur;

    if (umur < 0) {
        cout << "Kamu bukan manusia";
    } else {
        if (umur > 0 && umur <5) {
            cout << "Kamu masih balita";
        }
    }
    if (umur < 5) {
        cout << "Kamu bukan Remaja";
    } else {
        if (umur > 5 && umur < 12) {
            cout << "Kamu masih Remaja";
        }
    }
    if (umur < 12) {
        cout << "Kamu bukan dewasa";
    } else {
        if (umur > 12 && umur < 35) {
            cout << "Kamu Masih Dewasa";
        }
    }
    if (umur < 35) {
        cout << "Kamu bukan Lansia";
    } else {
        if (umur > 35 && umur < 70) {
            cout << "Kamu sudah lansia";
        }
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    system("CLS"); // short cout nya shift + tanda panah + bloc dengan ctrl D ganti    
    
    int umur;

    cout << "Berapa umur kamu: ";
    cin >> umur;

    if (umur < 0) {
        cout << "Kamu bukan manusia";
    } else {
        switch (umur) {
        case 1 ... 10:
            cout << "test";
            break;
        case 11 ... 20:
            cout << "test";
            break;
        case 21 ... 30:
            cout << "test";
            break;
        case 31 ... 40:
            cout << "test";
            break;
        
        default:
        cout << "input tidak benar";
            break;
        }

    return 0;
}
}