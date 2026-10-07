#include <iostream>

using namespace std;

int main () {
    int Day;
    int DayWeek;
    int StartingDay;
    cout << "Días: ";
    cin >> Day;
    cout << endl << "Días semana: ";
    cin >> DayWeek;
    cout << endl << "Día empieza: ";
    cin >> StartingDay;

    cout << endl << endl << "Tiene " << (Day - (DayWeek - StartingDay - 1)) / DayWeek << " semanas.";
}