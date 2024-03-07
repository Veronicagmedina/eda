#include "struct.h"
#include "pecas.h"
#include "constantes.h"

peca criarPeca(string*marcas, int numeroMarcas, string*categorias, int numeroCategorias) {
    peca peca;
    peca.marca = *(marcas + rand() % numeroMarcas);
    peca.categoria = *(categorias + rand() % numeroCategorias);
    peca.percentagemVenda = rand() % static_cast<int>(percentagemVendaMax-percentagemVendaMin+1) + percentagemVendaMin;
    peca.numeroSerie = rand() % (numeroSerieMax-numeroSerieMin+1) + numeroSerieMin;
    return peca;
}



void inserirPeca(peca*& lista, int& tamanho, peca p) {


    int novoTamanho = tamanho + 1;

    peca* novo = new peca[novoTamanho];

    for (int i = 0; i < tamanho; i++)
    {
        novo[i] = lista[i];
    }

    novo[novoTamanho - 1] = p;

    delete[] lista;

    lista = novo;

    tamanho = novoTamanho;
}
void removerPeca(peca*& lista, int& tamanho, int p) {
    int novoTamanho = tamanho - 1;

    peca* novo = new peca[novoTamanho];

    for (int i = 0; i < p; i++)
    {
        novo[i] = lista[i];
    }

    for (int i = p; i < novoTamanho; i++)
    {
        novo[i] = lista[i + 1];
    }

    delete[] lista;

    lista = novo;

    tamanho = novoTamanho;
}
