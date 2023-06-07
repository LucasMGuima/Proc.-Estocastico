#ifndef ESTOQUE_H_
#define ESTOQUE_H_

    /*
        Struct que representa o estoque da lanchonete,
        mantem o controle da quantidade de cada item
    */
    typedef struct Estoque {
        int hamburgue_carne;
        int hamburgue_frango;
        int bebida_A;
        int bebida_B;
        int pao;
    } Estoque;
    
    /*
        Inicia o estoque, com os valores entrados no array
        O array deve incerir os produtos na seguinte ordem
        [ hamburguer carne, hamburgue frango, bebida A, bibida B, pao ]

        @param estoque Estoque dos produtos
        @param quantidades Array com a quantidade dos prosutos
        @return Retorna um estoque com os valores informados
    */
    Estoque iniciarEstoque(int quantidades[]);

#endif