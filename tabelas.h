#ifndef TABELAS_H_
#define TABELAS_H_

    /*
        Retorna o tempo decorrido para a entrada de um novo cliente dado a probabilidade entrada.

        @param probabilidade Valor de 1 á 100 represnetando a probabilidade.
        @return Valor inteiro representando o tempo decorrido ou -1 se o valor entrado for falço.
    */
    int tempo_entrada(int probabilidade);

    /*
        Retorna o lanche dado o valor aleatorio entrado, que representa a chance de sair o dado a lanche

        @param valor Valor aleatorio entre 1 e 100.
        @return Nome do lanche ou uma String vazia se não encontrado.
    */
    const char * selecionar_lanhce(int valor);

    /*
        Retorna a bebida dado o valor aleatorio entrado, que representa a bebida.

        @param valor Valor aleatorio entre 1 e 100.
        @return Nome da bebida ou uma String vazia se não encontrado.
    */
    const char * selecionar_bebida(int valor);

    /*
        Retorna o tempo de caixa dado o valor aleatorio entrado.

        @param valor Valor aleatorio entre 1 e 100.
        @return Tempo de caixa ou -1 se o valor não for encontrado.
    */
    int tempo_caixa(int valor);

    /*
        Retorna o tempo de produção do lanche.

        @param lache Nome do lanche a ser produzido.
        @retun Tempo de pordução do lanche ou retorna -1 se o lanche não for encontrado.
    */
    int tempo_producao_lanche(const char * lanhce);
#endif