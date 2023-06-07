#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "tabelas.h"

int __tempo(int maior, int menor){
    return (rand() % (maior - menor + 1)) + menor;
}

int tempo_entrada(int probabilidade){
    int p = probabilidade;

    //Probabilidade de 0min (15)
    if(p > 0 && p <= 15) return 0;
    //Probabilidade de 1min (15)
    if(p > 15 && p <= 30) return 1;
    //Probabilidade de 2min (30)
    if(p > 30 && p <= 60) return 2;
    //Probabilidade de 3min (30)
    if(p > 60 && p <= 90) return 3;
    //Probabilidade de 5min (10)
    if(p > 90 && p <= 100) return 5;

    //Valor entrado não valido
    return -1;
}

const char * selecionar_lanhce(int valor){
    int p = valor;

    //Probabilidade de ser um lanhce Big
    if(p > 0 && p <= 40) return "Big";
    //Probabilidade de ser um lanche Super
    if(p > 40 && p <= 80) return "Super";
    //Probabilidade de ser um lanche Ultra
    if(p > 80 && p <= 100) return "Ultra";

    return "";
}

const char * selecionar_bebida(int valor){
    int p = valor;

    //Probabilida da bebida A
    if(p > 0 && p <= 50) return "A";
    //Probabilida da bebida B
    if(p > 50 && p <= 90) return "B";
    //Probabilida de nenhuma bebida
    if(p > 90 && p <= 100) return "Nenhuma";

    return "";
}

int tempo_caixa(int valor){
    int p = valor;

    //Probabilida de 5min
    if(p > 0 && p <= 30) return 5;
    //Probabilida de 7min
    if(p > 30 && p <= 80) return 7;
    //Probabilida de 10min
    if(p > 80 && p <= 100) return 10;
    
    return -1;
}

int tempo_producao_lanche(const char * lanche){
    
    //Tempo de produção Big
    if(strcmp(lanche, "Big")){
        return __tempo(4, 8);
    }
    //Tempo de produção Super
    if(strcmp(lanche, "Super")){
        return __tempo(3, 7);
    }
    //Tempo de produção Ultra
    if(strcmp(lanche, "Ultra")){
        return __tempo(5, 11);
    }
    
    return -1;
}