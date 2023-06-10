#include <stdio.h>
#include <stdlib.h>
#include "tabelas.h"
#include "estoque.h"

typedef struct Reestoque
{
    //Chega em 3 dias
    int bebida_A;
    int bebida_B;
    //Feito todo dia
    int pao;
    //Recebe a cada 2 dias
    int hamburguer_frango;
    //Recebe diariament
    int hamburguer_carne;
} Reestoque;

Reestoque iniciarRestoque(){
    Reestoque reestoque;

    reestoque.bebida_A = 300;
    reestoque.bebida_B = 200;
    reestoque.pao = 40;
    reestoque.hamburguer_frango = 250;
    reestoque.hamburguer_carne = 320;
}

int restoqueBebidaA(Reestoque reestoque){
    return reestoque.bebida_A;
}
int restoqueBebidaB(Reestoque reestoque){
    return reestoque.bebida_B;
}
int restoquePao(Reestoque reestoque){
    return reestoque.pao;
}
int restoqueHamburguerFrango(Reestoque reestoque){
    return reestoque.hamburguer_frango;
}
int restoqueHamburguerCarne(Reestoque reestoque){
    int desvioPadrao = 30;
    int media = reestoque.hamburguer_carne;

    int menor = media - desvioPadrao;
    int maior = media + desvioPadrao;

    int quantidade = (rand() % (maior - menor + 1)) + menor;
    return quantidade;
}

int main(void){
    
}