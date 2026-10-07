#include <iostream>

using namespace std;

int main () {
    int numgotas;
    int segundos;
    int minutos;
    int horas;
    cout << "Número de gotas que entran en el cubo: ";
    cin >> numgotas;
    horas = numgotas / 3600;
    minutos = (numgotas % 3600) / 60;
    segundos = (numgotas % 3600) % 60;
    cout << endl;
    cout << "El cubo durara " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos.";
}