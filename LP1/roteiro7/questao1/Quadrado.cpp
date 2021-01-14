//
// Created by epitacio on 26/09/17.
//

#include "Quadrado.h"

using namespace std;

Quadrado::Quadrado() {

}

Quadrado::~Quadrado() {

}

void Quadrado::setBase(double base) {
this->altura = altura;
}

void Quadrado::setAltura(double altura) {
this->altura = altura;
}

double Quadrado::getBase() {
    return base;
}

double Quadrado::getAltura() {
    return altura;
}

double Quadrado::calcularArea() {
    double base, altura;

    cout << "Digite a base: ";
    cin >> base;
    cout << endl << "Digite a altura: ";
    cin >> altura;

    setBase(base);
    setAltura(altura);

return base*altura;
}