//
// Created by epitacio on 03/09/17.
//

#include "CadastroDePessoas.h"
#include "Pessoa.h"

using namespace std;

CadastroDePessoas::CadastroDePessoas() {

}

CadastroDePessoas::~CadastroDePessoas() {

}

void CadastroDePessoas::main() {
    Pessoa pessoa1("", 0, 0), pessoa2("", 0, 0);

    std::string nome;
    int idade, telefone, i;

    for(i = 0; i < 2; i++) {

        if(!i) {

            cout << "Digite o nome da pessoa: ";
            cin >> nome;
            cout << endl << "Digite a idade da pessoa: ";
            cin >> idade;
            cout << endl << "Digite o telefone da pessoa: ";
            cin >> telefone;

            pessoa1.setNome(nome);
            pessoa1.setIdade(idade);
            pessoa1.setTelefone(telefone);

            cout << "Nome: " << pessoa1.getNome() << endl;
            cout << "Idade: " << pessoa1.getIdade() << endl;
            cout << "Telefone: " << pessoa1.getTelefone() << endl;
        }else {
            cout << "Digite o nome da pessoa: ";
            cin >> nome;
            cout << endl << "Digite a idade da pessoa: ";
            cin >> idade;
            cout << endl << "Digite o telefone da pessoa: ";
            cin >> telefone;

            pessoa2.setNome(nome);
            pessoa2.setIdade(idade);
            pessoa2.setTelefone(telefone);

            cout << "Nome: " << pessoa2.getNome() << endl;
            cout << "Idade: " << pessoa2.getIdade() << endl;
            cout << "Telefone: " << pessoa2.getTelefone() << endl;
        }
    }


}