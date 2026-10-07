#include <iostream>

using namespace std;

int main () {
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;
    int n10;
    int pesocarroa;
    int pesocarrob;
    int pesocarroc;
    int pesocarrod;
    int pesocarroe;
    int pesotodosloscarros;
    cout << "Introduzca los 10 números" << endl;
    cin >> n1;
    cout << endl;
    cin >> n2;
    cout << endl;
    cin >> n3;
    cout << endl;
    cin >> n4;
    cout << endl;
    cin >> n5;
    cout << endl;
    cin >> n6;
    cout << endl;
    cin >> n7;
    cout << endl;
    cin >> n8;
    cout << endl;
    cin >> n9;
    cout << endl;
    cin >> n10;
    cout << endl;
    pesotodosloscarros = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 4;
    pesocarroc = pesotodosloscarros - n1 - n10;
    pesocarroa = n2 - pesocarroc;
    pesocarrob = n1 - pesocarroa;
    pesocarroe = n9 - pesocarroc;
    pesocarrod = n10 - pesocarroe;

    cout << pesocarroe << " " << pesocarrod << " " << pesocarroc << " " << pesocarrob << " " << pesocarroa;

   /* cout << endl << "Carro A: " << pesocarroa;
    cout << endl << "Carro B: " << pesocarrob;
    cout << endl << "Carro C: " << pesocarroc;
    cout << endl << "Carro D: " << pesocarrod;
    cout << endl << "Carro E: " << pesocarroe; */
}