#include <iostream>

using namespace std;

int main () {
    int numacuarios;
    int litros;
    int diferencialitros;
    cout << "Número de acuarios: ";
    cin >> numacuarios;
    cout << endl;
    cout << "Litros en el acuario más grande: ";
    cin >> litros;
    cout << endl;
    cout << "Diferencia entre acuario en litros: ";
    cin >> diferencialitros;
    cout << endl;
    cout << "Necesitas " << (numacuarios * (2 *  litros - (numacuarios - 1) * diferencialitros)) / 2 << " litros";
}