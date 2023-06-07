#include "estoque.h"

Estoque iniciarEstoque(int quantidades[]){
    Estoque estoque;

    estoque.hamburgue_carne = quantidades[0];
    estoque.hamburgue_frango = quantidades[1];
    estoque.bebida_A = quantidades[2];
    estoque.bebida_B = quantidades[3];
    estoque.pao = quantidades[4];

    return estoque;
}
