//
// Created by epitacio on 01/09/17.
//

#include "InvoiceTest.h"
#include "Invoice.h"

using namespace std;

void InvoiceTest::main() {
    Invoice fatura(0, 0, 0, "");
    int numero, quantidade;
    float preco;
    string descricao;

    cout << "Digite o numero do produto: ";
    cin >> numero;
    cout << endl << "Digite a descrição do produto: ";
    cin >> descricao;
    cout << endl << "Digite o preço do produto: ";
    cin >> preco;
    cout << endl << "Digite a quantidade de produtos: ";
    cin >> quantidade;

    fatura.setQuantidade(quantidade);
    fatura.setPreco(preco);
    fatura.setNumero(numero);
    fatura.setDescricao(descricao);

    cout << "Numero do produto: " << fatura.getNumero();
    cout << endl << "Preço do produto: " << fatura.getPreco();
    cout << endl << "Quantidade do produto: " << fatura.getQuantidade();
    cout << endl << "Descrição do produto: " << fatura.getDescricao();
    cout << endl << "Valor da fatura: " << fatura.getInvoiceAmount();


}

InvoiceTest::InvoiceTest() {

}

InvoiceTest::~InvoiceTest() {

}