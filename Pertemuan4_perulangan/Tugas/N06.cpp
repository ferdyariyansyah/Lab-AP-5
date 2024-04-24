#include <iostream>
using namespace std;

int main() {
    system("cls");
  int n, sum = 0;
  cout << "Masukkan bilangan bulat positif: ";
  cin >> n;

  for (int i = 2; i <= n; i += 2) {
    sum += i * i;
  }

  cout << "Jumlah kuadrat bilangan genap sampai " << n << " adalah " << sum << "." << std::endl;

  return 0;
}
