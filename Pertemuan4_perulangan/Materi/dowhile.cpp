#include <iostream>
using namespace std;

int main() {
  system("cls");

  string nama = "ferdy";

  for (int i = 0; i < nama.length(); i++) {
    if (nama[i] == 'a' || nama[i] == 'i' || nama[i] == 'u' || nama[i] == 'e') {
      nama[i] = 'o';
    }
  }

  cout << "Nama yang diubah: " << nama << endl;

  return 0;
}
