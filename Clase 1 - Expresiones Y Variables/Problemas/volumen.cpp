#include <iostream>
using namespace std;

int main() {
    int volumen;
    int leccion;
    cout << "Introduce la leccion: ";
    cin >> leccion;
    volumen = leccion / 100;
    cout << "El volumen es: " << volumen;
}