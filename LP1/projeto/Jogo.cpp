//
// Created by epitacio on 19/11/17.
//

#include "Jogo.h"
#include "opencv2/opencv.hpp"
#include <stdio.h>
#include "Amarelo.h"
#include "Verde.h"
#include "Azul.h"
#include "Preto.h"
#include "Branco.h"
#include "Vermelho.h"

using namespace std;
using namespace cv;

Jogo::Jogo() {

}

Jogo::~Jogo() {

}

void Jogo::SortCor() {

    /*
        Codificação das cores:
            Preto = 1;
            Branco = 2;
            Azul = 3;
            Vermelho = 4;
            Amarelo = 5;
            Verde = 6;
                                */
    int ar[6] = {1, 2, 3, 4, 5, 6};
    int sorteia;

    sorteia = 1 + (rand()%6);

    switch(sorteia) {
        case 1:
            cout << "Preto" << endl;
            break;
        case 2:
            cout << "Branco" << endl;
            break;
        case 3:
            cout << "Azul" << endl;
            break;
        case 4:
            cout << "Vermelho" << endl;
            break;
        case 5:
            cout << "Amarelo" << endl;
            break;
        case 6:
            cout << "Verde" << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
    }
}

void Jogo::login() {
    std::string nome;
    Jogo a;
    bool cond = true;
    char c;

    cout << "Digite seu nome: ";
    cin >> nome;

    while(cond) {
        a.SortCor();
        a.jogar();
        cout << "Deseja sair do jogo? (Digite 's' para sair)" << endl;
        cin >> c;
        if(c == 's') {
            cond = false;
        }else {
            continue;
        }
    }
}

void Jogo::jogar() {

    char path[255];

    strcpy(path, "/home/epitacio/cor.jpg");
    IplImage *frame;
    IplImage *small;
    CvCapture *capture = cvCaptureFromCAM(0);
    cvNamedWindow("capture", CV_WINDOW_AUTOSIZE);

    frame = cvQueryFrame(capture);
    small = cvCreateImage(cvSize(frame->width / 2, frame->height / 2), 8, 3);

    while (1) {

        frame = cvQueryFrame(capture);

        cvResize(frame, small);

        cvShowImage("capture", small);

        int ch = cvWaitKey(25);

        if (ch == 27) {
            break;
        }

        if (ch == 's') {
            cvSaveImage(path, small);
        }
    }

    cvReleaseImage(&small);
    cvDestroyWindow("capture");
    waitKey(0);
}