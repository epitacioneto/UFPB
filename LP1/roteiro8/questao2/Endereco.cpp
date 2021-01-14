//
// Created by epitacio on 31/10/17.
//

#include "Endereco.h"

Endereco::Endereco() {

}

Endereco::~Endereco() {

}

std::string Endereco::getBairro() {
    return bairro;
}

std::string Endereco::getCep() {
    return cep;
}

std::string Endereco::getCidade() {
    return cidade;
}

std::string Endereco::getLogradouro() {
    return logradouro;
}

int Endereco::getNumero() {
    return numero;
}

void Endereco::setBairro(std::string bairro) {
    this->bairro = bairro;
}

void Endereco::setCep(std::string cep) {
    this->cep = cep;
}

void Endereco::setCidade(std::string cidade) {
    this->cidade = cidade;
}

void Endereco::setLogradouro(std::string logradouro) {
    this->logradouro = logradouro;
}

void Endereco::setNumero(int numero) {
    this->numero = numero;
}