#include "struct.h"
#include "pecas.h"
#include "constantes.h"

pecas criarPeca(string*marcas, int numeroMarcas, string*categorias, int numeroCategorias) {
    pecas peca;
    peca.marca = *(marcas + rand() % numeroMarcas);
    peca.categoria = *(categorias + rand() % numeroCategorias);
    peca.percentagemVenda = rand() % (percentagemVendaMax-percentagemVendaMin+1) + percentagemVendaMin;
    peca.numeroSerie = rand() % (numeroSerieMax-numeroSerieMin+1) + numeroSerieMin;
    return peca;
}

void inserirPeca(pecas*& lista, int& tamanho, pecas peca) {


    int novoTamanho = tamanho + 1;

    pecas* novo = new pecas[novoTamanho];

    for (int i = 0; i < tamanho; i++)
    {
        novo[i] = lista[i];
    }

    novo[novoTamanho - 1] = peca;

    delete[] lista;

    lista = novo;

    tamanho = novoTamanho;
}
void removerPeca(pecas*& lista, int& tamanho, int peca) {
    int novoTamanho = tamanho - 1;

    pecas* novo = new pecas[novoTamanho];

    for (int i = 0; i < peca; i++)
    {
        novo[i] = lista[i];
    }

    for (int i = peca; i < novoTamanho; i++)
    {
        novo[i] = lista[i + 1];
    }

    delete[] lista;

    lista = novo;

    tamanho = novoTamanho;
}
