#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

void Prompt(int n, int **M, int *caminho, int *melhorVizinho, int GraspMax, float alfa) {
    int x;
    int custo;
    bool loop = true;

    /*
    printf("Digite o numero de iteracoes:"
            "\n-> ");
    scanf("%d", &GraspMax);
    printf("\nDigite o alfa:"
           "\n-> ");
    scanf("%f", &alfa);
    */

    while(loop) {

        printf("\nEscolha uma opcao:"
                "\n1. Gerar solucao"
                "\n2. Gerar matriz"
                "\n3. Custo da solucao"
                "\n0. Sair\n");
        printf("-> ");
        scanf("%d", &x);

        switch(x) {
        case 1:
            //GRASP(n, M, caminho, melhorVizinho, alfa, GraspMax);
            ConstruirCaminho(n, M, caminho, alfa);
            vnd(n, M, caminho, melhorVizinho);
            printf("\nSolucao: ");
            ImprimirCaminho(n+1, melhorVizinho);
            break;
        case 2:
            printf("\nMatriz: \n");
            ImprimirMatriz(n, M);
            break;
        case 3:
            custo = Avaliacao(n, M, melhorVizinho);
            printf("\nCusto: %d\n", custo);
            break;
        case 0:
            loop = false;
            break;
        default:
            printf("\nDigite uma opcao valida.\n");

        }
    }
}


int DistanciaEuclidiana(float x1, float x2, float y1, float y2){
    float d = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    return round(sqrt(d));
}


void DisplayDataSection(int n, int **M, float x[n], float y[n]){
    int i, j;
    int init = 0;
    for (i = 0; i < n - 1 ; i++) {
        for (j = init; j < n ; j++){
            if (i == j){
                M[i][j] = M[j][i] = 0;
                continue;
            }
            M[i][j] = M[j][i] = DistanciaEuclidiana(x[i], x[j], y[i], y[j]);
        }
        init++;
    }
}


void EdgeWeightSection(int n, int **M, FILE *file){
    int i, j;
    for (i = 0; i < n;i++){
        for (j=0; j < n; j++){
            fscanf(file, "%d", &M[i][j]);
        }
    }
}


void ImprimirMatriz(int n, int **M) {
    printf("Matriz\n\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
    }
}

//vizinho mais proximo
void ConstruirCaminho(int n, int **M, int *caminho, float alfa) {
    bool inseridos[n], novaRota;
    //int *LCR, countLCR;
    //int maiorValorDeRef, maiorVizinhoSelecionado, custoLimite, menorVizinhoSelecionado;
    //int random, indiceRandom, aux, custoLimite;

    //LCR = malloc(n*sizeof(int)+1);
    //countLCR = 0;

    for(int i = 0; i < n; i++) {
        inseridos[i] = false;
    }

    caminho[0] = 0;
    inseridos[0] = true;

    for(int i = 0; i < n; i++) {
        int menorValorDeRef = INT_MAX;
        //int maiorValorDeRef = 0;
        //int maiorVizinhoSelecionado = 0;
        int menorVizinhoSelecionado = 0;

        for(int j = 0; j < n; j++) {
            if(!inseridos[j] && menorValorDeRef >= M[i][j]) {
                menorVizinhoSelecionado = j;
                menorValorDeRef = M[i][j];
            }
           /* if(!inseridos[j] && maiorValorDeRef <= M[i][j]) {
                maiorVizinhoSelecionado = j;
                maiorValorDeRef = M[i][j];
            }*/
        }
        /*
        custoLimite = menorValorDeRef + alfa * (maiorValorDeRef - menorValorDeRef);

        for(int k = 0; k < n; k++) {
            if(M[i][k] <= custoLimite && !inseridos[k]) {
                LCR[countLCR] = k;
                countLCR++;
            }
        }

        if(!countLCR) {
            break;
        }

        srand(time(NULL));

        random = rand() % countLCR;
        indiceRandom = (int)round(random);
        int aux2 = indiceRandom;
        indiceRandom = LCR[aux2];
        novaRota = true;

        if(novaRota) {
            aux = caminho[i+1];
            caminho[i+1] = caminho[indiceRandom];
            caminho[indiceRandom] = aux;
            novaRota = false;
            inseridos[indiceRandom] = true;
        }
        */

        caminho[i+1] = menorVizinhoSelecionado;
        inseridos[menorVizinhoSelecionado] = true;
    }

    caminho[n] = 0;
    free(inseridos);
    //free(LCR);
}


void ImprimirCaminho(int n, int *caminho) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", caminho[i]);
    }
    printf("\n");
}


int Avaliacao(int n, int **M, int *caminho) {
    int custo = 0;

    for(int i = 0; i < n; i++) {
        custo += M[caminho[i]][caminho[i+1]];
    }

return custo;
}


void CopiarCaminho(int n, int **M, int *origem, int *destino) {
    int i;

    for(i = 0; i <= n; i++) {
        destino[i] = origem[i];
    }
}


void Swap(int n, int **M, int *solucaoInicial, int *melhorVizinho)  {
    int *solucaoTemp[n+1];
    int custoDeRef = Avaliacao(n, M, solucaoInicial);
    int custoTemp;

    CopiarCaminho(n, M, solucaoInicial, melhorVizinho);

    for(int i = 1; i < n; i++) {
        CopiarCaminho(n, M, solucaoInicial, solucaoTemp);
        for(int j = i+1; j < n; j++) {
            int temp = solucaoTemp[i];
            solucaoTemp[i] = solucaoTemp[j];
            solucaoTemp[j] = temp;
            custoTemp = Avaliacao(n, M, solucaoTemp);
            if(custoTemp < custoDeRef) {
                custoDeRef = custoTemp;
                CopiarCaminho(n, M, solucaoTemp, melhorVizinho);
                }
            }
        }
    }

void TwoOpt(int n, int **M, int *solucaoInicial, int *melhorVizinho) {
    int i, j;

    int *solucaoTemp[n+1];
    int custoDeRef = Avaliacao(n, M, solucaoInicial);
    int custoTemp;

    CopiarCaminho(n, M, solucaoInicial, melhorVizinho);

    for(i = 1; i < n-1; i++) {
        CopiarCaminho(n, M, solucaoInicial, solucaoTemp);
        for(j = i+2; j < n; j++) {
            int temp = solucaoTemp[i];
            solucaoTemp[i] = solucaoTemp[j];
            solucaoTemp[j] = temp;
            custoTemp = Avaliacao(n, M, solucaoTemp);
            if(custoTemp < custoDeRef) {
                custoDeRef = custoTemp;
                CopiarCaminho(n, M, solucaoTemp, melhorVizinho);
            }
        }
    }

}

void vnd(int n, int **M, int *caminho, int *melhorVizinho) {
    int x = 0;

    CopiarCaminho(n, M, caminho, melhorVizinho);

    while(x < 2) {
        if(!x) {
            Swap(n, M, caminho, melhorVizinho);
        }
        if(x) {
            TwoOpt(n, M, caminho, melhorVizinho);
        }
        if(Avaliacao(n, M, melhorVizinho) < Avaliacao(n, M, caminho)) {
            CopiarCaminho(n, M, melhorVizinho, caminho);
            x = 0;
        } else {
            x++;
        }
    }
}

void GRASP(int n, int **M, int *caminho, int *melhorVizinho, float alfa, int GraspMax) {
    for(int i = 0; i < GraspMax; i++) {
        ConstruirCaminho(n, M, caminho, alfa);
        //ImprimirCaminho(n, caminho);
        int custo = Avaliacao(n, M, caminho);
        vnd(n, M, caminho, melhorVizinho);

        if(Avaliacao(n, M, melhorVizinho) < custo) {
            melhorVizinho = caminho;
        }
    }
}

int main(void) {
    int n, custo;
    int i = 0;
    const char *str[100];
    const char *str1[2000];
    bool display = false;
    bool edge = false;
    float alfa = 0.7;
    int GraspMax = 10;

    FILE *fp;
    fp = fopen("bayg29.txt", "r");

    if(fp == NULL) {
        printf("Erro.");
    }

    while (fscanf(fp, "%s", &str[i])){
        if (!strcmp(&str[i], "DIMENSION:")){
            fscanf(fp, "%d", &n);
            break;
        }
        ++i;
    }

    int **M = (int**)malloc(sizeof(int*) * n+1);

    for(i = 0; i < n; i++) {
        M[i] = (int*)malloc(sizeof(int) * n+1);
    }

    while (fscanf(fp, "%s", &str1[i])){
        if (!strcmp(&str1[i], "DISPLAY_DATA_SECTION")){
            display = true;
            break;
        }
        if (!strcmp(&str1[i], "EDGE_WEIGHT_SECTION")){
            edge = true;
            break;
        }
        ++i;
    }

    if (display){
        int index[n];
        int x[n];
        int y[n];

        for (i = 0; i < n ; i++){
            fscanf(fp, "%d", &index[i]);
            fscanf(fp, "%f", &x[i]);
            fscanf(fp, "%f", &y[i]);
        }
        DisplayDataSection(n, M, x, y);
    }

    if (edge){
        EdgeWeightSection(n, M, fp);
    }

    fclose(fp);

    int *solucaoInicial[n+1];
    ConstruirCaminho(n, M, solucaoInicial, alfa);

    int *melhorVizinho[n+1];
    //GRASP(n, M, solucaoInicial, melhorVizinho, alfa, GraspMax);
    //Prompt(n, M, solucaoInicial, melhorVizinho, GraspMax, alfa);
    vnd(n, M, solucaoInicial, melhorVizinho);
    custo = Avaliacao(n, M, melhorVizinho);
    printf("%d", custo);

return 0;
}
