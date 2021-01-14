//
// Created by epitacio on 26/09/17.
//

#include <cmath>
#include "Circulo.h"

using namespace std;

Circulo::Circulo() {

}

Circulo::~Circulo() {

}

void Circulo::setRaio(double raio) {
    this->raio = raio;
}

double Circulo::getRaio() {
    return raio;
}

double Circulo::calcularArea() {
    double raio;

    cout << "Digite o raio: ";
    cin >> raio;

    setRaio(raio);

    return pow(3.14*raio, 2);
}