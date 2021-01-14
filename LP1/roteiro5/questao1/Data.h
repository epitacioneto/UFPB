//
// Created by epitacio on 01/09/17.
//

#ifndef Data_h
#define Data_h

class Data {

public:
    Data(int dia, int mes, int ano);
    ~Data();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();
    bool checaData(int dia, int mes, int ano);
    void avancarDia(int dia, int mes, int ano);
    void corrigeData(int dia, int mes, int ano);

private:
    int dia, mes, ano;
};

#endif