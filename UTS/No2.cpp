#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n, i, count = 0;

    cout << "Masukkan bilangan : ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Bilangan genap" << endl;
    else
        cout << "Bilangan ganjil" << endl;

    if (n % 3 == 0)
        cout << "Bilangan habis dibagi 3" << endl;
    else
        cout << "Bilangan tidak habis dibagi 3" << endl;

    if (n % 5 == 0)
        cout << "Bilangan habis dibagi 5" << endl;
    else
        cout << "Bilangan tidak habis dibagi 5" << endl;

    if (n % 7 == 0)
        cout << "Bilangan habis dibagi 7" << endl;
    else
        cout << "Bilangan tidak habis dibagi 7" << endl;

    return 0;
}