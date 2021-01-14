//
// Created by epitacio on 21/09/17.
//

#ifndef QUESTAO2_TELEVISAO_H
#define QUESTAO2_TELEVISAO_H


class Televisao {
public:
    Televisao();
    ~Televisao();
    void setVolume(int volume);
    void setCanal(int canal);
    void ajustaVolume(int volume);
    void ajustaCanal(int canal);
    void exibeTeve();

private:
    int volume, canal;

};


#endif //QUESTAO2_TELEVISAO_H
