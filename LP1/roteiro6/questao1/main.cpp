#include <iostream>
#include "Relogio.h"

using namespace std;

int main() {
    Relogio horario;
    int hora, minuto, segundo;
    bool horarioCorreto;

    cout << "Digite a(s) hora(s): ";
    cin >> hora;
    cout << endl << "Digite o(s) minuto(s): ";
    cin >> minuto;
    cout << endl << "Digite o(s) segundo(s): ";
    cin >> segundo;

    horarioCorreto = horario.checaHorario(hora, minuto, segundo);

    if(horarioCorreto) {
        horario.setHorario(hora, minuto, segundo);
        horario.avancarHorario(hora, minuto, segundo);
        cout << "Hora(s): " << horario.getHora() << endl;
        cout << "Minuto(s): " << horario.getMinuto() << endl;
        cout << "Segundo(s): " << horario.getSegundo();
    }

    return 0;
}