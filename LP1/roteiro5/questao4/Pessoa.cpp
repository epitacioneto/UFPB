//
// Created by epitacio on 03/09/17.
//

#include "Pessoa.h"

Pessoa::Pessoa(std::string nome) {

}

Pessoa::Pessoa(std::string nome, int idade, int telefone) {

}

Pessoa::~Pessoa() {

}

void Pessoa::setNome(std::string nome) {
    this->nome = nome;

}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

void Pessoa::setTelefone(int telefone) {
    this->telefone = telefone;
}

std::string Pessoa::getNome() {
    return this->nome;
}

int Pessoa::getIdade() {
    return this->idade;
}

int Pessoa::getTelefone() {
    return this->telefone;
}