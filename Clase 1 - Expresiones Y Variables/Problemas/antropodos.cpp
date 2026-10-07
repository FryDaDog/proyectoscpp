#include <iostream>

using namespace std;

int main() {
    int insectos;
    int aracnidos;
    int crustaceos;
    int escolopendras;
    int anillos;
    cout << "Introduce el número de insectos: ";
    cin >> insectos;
    cout << "Introduce el número de aracnidos: ";
    cin >> aracnidos;
    cout << "Introduce el número de crustaceos: ";
    cin >> crustaceos;
    cout << "Introduce el número de escolopendras: ";
    cin >> escolopendras;
    cout << "Introduce el número de anillos: ";
    cin >> anillos;
    int patas;
    patas = insectos * 6 + aracnidos * 8 + crustaceos * 10 + escolopendras * anillos * 2;
    cout << "El número total de patas es: " << patas;
}