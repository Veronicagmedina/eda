#pragma once
#include <string>
#include "constantes.h"
using namespace std;

struct pecas {
    string marca;
    string categoria;
    float preco;
};

struct seccao {
    int ID;
    int capacidade;
    char numeroDeSerie;
    int quantidadeAtual;
    float faturacaoSecao;
    string categoria;
    pecas* pecas;
};

struct armazem {
    seccao* seccao;
    float faturacaoToral;
    int numeroSeccoes;
    float faturacaoPorSeccao;
    pecas listaDeChegada;
    int quantidadeDePecasNaListaDeChegada;
};
