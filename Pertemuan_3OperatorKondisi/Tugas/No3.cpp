#include <iostream>
using namespace std;

int main() {
    system("cls");
    float a,bb,tb;
    cout << "Berapa berat badan kamu? (kilogram)\n";
    cin >> bb;
    cout << "Berapa Tinggi Badan Kamu? (Meter)\n";
    cin >> tb;

    a=bb/(tb*tb);
    if(a<18.1){
        cout << "BMI kamu adalah ("<<a<<") Maka kamu underweigth";
    } else if(a>=18.1 && a<=23.1){
        cout << "BMI kamu adalah ("<<a<<") Maka kamu normal";
    } else if(a>=23.1 && a<=28.1){
        cout << "BMI kamu adalah ("<<a<<") Maka kamu overweigth";
    } else if(a>28.1){
        cout << "BMI kamu adalah ("<<a<<") Maka kamu obesitas";
    }
}