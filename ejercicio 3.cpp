#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int day, month, year;
    cout << "Ingresa el día: "; cin >> day;
    cout << "Ingresa el mes: "; cin>> month;
    cout << "Ingresa el año: "; cin>> year;

    struct tm time_in = {0, 0, 0, day, month - 1, year - 1900};
    time_t time_temp = mktime(&time_in);        //valor de hora
    struct tm *time_out = localtime(&time_temp); //hora local

    const char *weekday[] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    int elapsed_days = difftime(time(0), time_temp) / (60 * 60 * 24);

    cout << "El " << day << "/" << month << "/" << year << " fue un " << weekday[time_out->tm_wday] << "." << endl;
    cout << "han pasado " << elapsed_days << " dias desde entonces." << endl;

    return 0;
}
