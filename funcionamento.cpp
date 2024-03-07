#include "funcionamento.h"
#include "pecas.h"

void seguinte(seccao*& armazem, int numeroSeccoes, pecas*& listaChegada, int& listaChegadaTotal, string* categorias, int numeroCategorias, string* marcas, int numeroMarcas) {

    inserirPecasListaDeChegada(armazem, numeroSeccoes, listaChegada, listaChegadaTotal, numeroPecasNovas, categorias, numeroCategorias, marcas, numeroMarcas);
    removerPecasListaDeChegada(armazem, numeroSeccoes, listaChegada, listaChegadaTotal, numeroPecasInseridasSeccao);

}

void inserirPecasListaDeChegada(seccao*& armazem, int numeroSeccoes, pecas*& pecasListaDeChegada, int& pecasListaDeChegadaTotal, int numeroPecas, string* categorias, int numeroCategorias, string* marcas, int numeroMarcas) {
    while (numeroPecas) {
        pecas novo = criarPeca(marcas, numeroMarcas, categorias, numeroCategorias);
        for (int i = 0; i < numeroSeccoes; i++) {
            bool podeEntrar = (armazem[i].categoria == novo.categoria);
            if (podeEntrar) {
                inserirPeca(pecasListaDeChegada, pecasListaDeChegadaTotal, novo);
                numeroPecas--;
                break;
            }
        }
    }
}

void removerPecasListaDeChegada(seccao*& armazem,int numeroSeccoes,pecas*& pecasListaDeChegada,int& pecasListaDeChegadaTotal, int numeroPecasInseridasSeccao){

}

