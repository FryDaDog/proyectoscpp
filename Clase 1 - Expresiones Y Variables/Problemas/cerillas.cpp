#include <iostream>

using namespace std;

int main() {
    int cuadradosVerticales;
    int cuadradosHorizontales;
    int cerillas;
    cout << "Introduce el número de cuadrados verticales: ";
    cin >> cuadradosVerticales;
    cout << "Introduce el número de cuadrados horizontales: ";
    cin >> cuadradosHorizontales;
    cerillas = (cuadradosHorizontales * cuadradosVerticales * 2) + cuadradosHorizontales + cuadradosVerticales;
    cout << "El número total de cerillas es: " << cerillas;
}