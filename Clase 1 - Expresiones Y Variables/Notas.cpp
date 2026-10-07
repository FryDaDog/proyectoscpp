#include <iostream>

using namespace std;

int main() {

  // Inicialización de variables

  string curso;
  int alumnosCurso;
  int alumnosFaltan;
  int alumnos;
  int profesores;
  int personas;
  int doblePersonas;
  int mitadPersonas;
  int restomitadPersonas;

  // Entrada de datos

  cout << "Introduce el nombre del curso: "; // Console OUT
  cin >> curso; // Console IN
  cout << "Introduce el número de alumnos: "; 
  cin >> alumnosCurso; 
  cout << "Introduce el número de que faltan: "; 
  cin >> alumnosFaltan; 
  cout << "Introduce el número de profesores: "; 
  cin >> profesores; 

  //Resta

  alumnos = alumnosCurso - alumnosFaltan;

  //Suma

  personas = alumnos + profesores; 

  cout << "Hay ";
  cout << personas;
  cout << " personas en el curso " << curso;
  cout << endl;
  doblePersonas = 2 * personas; 

  //Multiplicacion

  cout << "El doble de personas es ";
  cout << doblePersonas;
  cout << "." << endl;

  //Division

  mitadPersonas = personas / 2; 
  cout << "La mitad de personas es ";
  cout << mitadPersonas;
  cout << "." << endl;
  restomitadPersonas = personas % 2; 

  //Modulo

  cout << "El resto de la mitad de personas es ";
  cout << restomitadPersonas;
  cout << "." << endl;
}
