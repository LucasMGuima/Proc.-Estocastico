#include <stdio.h>
#include "tabelas.h"
#include "estoque.h"

int main(void){
    int qtds[] = {10,10,10,10,10};
    Estoque estoque = iniciarEstoque(qtds);

    printf("%d", estoque.hamburgue_carne);
    scanf("%d");
}