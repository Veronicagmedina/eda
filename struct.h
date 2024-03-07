#pragma once
#include <string>
#include "constantes.h"
using namespace std;

struct peca {
    string marca;
    string categoria;
    float preco;
    float percentagemVenda;
    int numeroSerie;
};

struct seccao {
    int ID;
    int capacidade;
    char numeroDeSerie;
    int quantidadeAtual;
    int numeroPecasSeccao;
    float faturacaoSecao;
    string categoria;
    peca* listaPecas;
};

struct armazem {
    seccao* seccao;
    float faturacaoToral;
    int numeroSeccoes;
    float faturacaoPorSeccao;
    peca listaDeChegada;
    int quantidadeDePecasNaListaDeChegada;
};
