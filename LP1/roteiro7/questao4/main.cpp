#include <iostream>

#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

int main() {
    Trabalhador *trabalhadores[2];
    int i;
    double salario;
    std::string nome;
    int horas;

    for(i = 0; i < 2; i++) {
        if (i == 0) {
            trabalhadores[i] = new TrabalhadorAssalariado();

        }else {
            trabalhadores[i] = new TrabalhadorPorHora();
        }
    }





    return 0;
}