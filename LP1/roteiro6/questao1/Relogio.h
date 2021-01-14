//
// Created by epitacio on 19/09/17.
//

#ifndef QUESTAO1_RELOGIO_H
#define QUESTAO1_RELOGIO_H


class Relogio {
public:
    Relogio();
    ~Relogio();
    void setHorario(int hora, int minuto, int segundo);
    int getHora();
    int getMinuto();
    int getSegundo();
    void avancarHorario(int hora, int minuto, int segundo);
    bool checaHorario(int hora, int minuto, int segundo);
private:
    int hora, minuto, segundo;
};


#endif //QUESTAO1_RELOGIO_H
