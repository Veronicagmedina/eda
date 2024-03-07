#include <iostream>
#include<string>
#include<time.h>
#include <stdlib.h>

#include "constantes.h"
#include "struct.h"
#include "ficheiros.h"
#include "seccao.h"
#include "funcionamento.h"

using namespace std;

int main() {
    locale::global(locale(""));


    srand(time(NULL));

    int numeroMarcas = contarLinhasFicheiro("C:\\Users\\35193\\Desktop\\ProjetoEDA1\\marcas.txt");
    string marcas[numeroMarcas];

    int numeroCategoria = contarLinhasFicheiro("C:\\Users\\35193\\Desktop\\ProjetoEDA1\\categorias.txt");
    string categorias[numeroCategoria];

    carregarLinhasFicheiro("C:\\Users\\35193\\Desktop\\ProjetoEDA1\\marcas.txt", marcas);
    carregarLinhasFicheiro("C:\\Users\\35193\\Desktop\\ProjetoEDA1\\categorias.txt", categorias);

    peca *pecasListaDeChegada = new peca[0]; //Criar/alocar memoria para a lista de chegada
    int pecasListaDeChegadaTotal = 0; //Iniciar a variável do tamanho da lista de chegada


    int numeroSeccoes = rand() % (numeroMaxSeccoes - numeroMinSeccoes + 1) +
                        numeroMinSeccoes; //Atribuir o valor do numero de seccoes entre 7 a 10


    seccao *armazem = new seccao[numeroSeccoes]; //Criar/alocar memoria para o arrays das secçoes

    criarSeccao(categorias, numeroCategoria);
    inserirPecasListaDeChegada(armazem, numeroSeccoes, pecasListaDeChegada, pecasListaDeChegadaTotal, numeroPecasNovas,
                               categorias, numeroCategoria, marcas, numeroMarcas);
}


