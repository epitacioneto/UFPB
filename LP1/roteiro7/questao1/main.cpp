#include <iostream>
#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

using namespace std;

int main() {
    int i;
    FiguraGeometrica *figuras[3];
    std::string nome;

    for(i = 0; i < 3; i++) {
        cin >> nome;
        figuras[i]->setNome(nome);

        if(figuras[i]->getNome().compare("Quadrado") == 0) {
            figuras[i] = new Quadrado();
            cout << figuras[i]->calcularArea();
        }
        if(figuras[i]->getNome().compare("Circulo") == 0) {
            figuras[i] = new Circulo();
            cout << figuras[i]->calcularArea();
        }
        if(figuras[i]->getNome().compare("Triangulo") == 0) {
            figuras[i] = new Triangulo();
            cout << figuras[i]->calcularArea();
        }
    }

    return 0;
}