//
// Created by epitacio on 26/09/17.
//

#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo() {

}

Triangulo::~Triangulo() {

}

void Triangulo::setAltura(double altura) {
this->altura = altura;
}

void Triangulo::setBase(double base) {
    this->base = base;
}

double Triangulo::getAltura() {
    return altura;
}

double Triangulo::getBase() {
    return base;
}

double Triangulo::calcularArea() {
    double base, altura;

    cout << "Digite a base: ";
    cin >> base;
    cout << endl << "Digite a altura: ";
    cin >> altura;

    setBase(base);
    setAltura(altura);

return (base*altura)/2;

}