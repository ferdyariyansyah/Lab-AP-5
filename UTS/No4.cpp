#include <iostream>
using namespace std;

int main() {
    system("cls");
    int tinggi;

    cout << "Masukan tinggi diamond: ";
    cin >> tinggi;

    for (int i = 0; i <= tinggi; i++) {
        for (int j = 1; j <= (tinggi - i); j++) {
            cout << " ";
        }
        for (int k = 1; k < 2 * i - 6; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = tinggi - 1; i >= 0; i--) {
        for (int j = 1; j <= (tinggi - i); j++) {
            cout << " ";
        }
        for (int k = 1; k < 2 * i - 6; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}