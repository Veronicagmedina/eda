#include "funcionamento.h"
#include "pecas.h"

void seguinte(seccao*& armazem, int numeroSeccoes, peca*& listaChegada, int& listaChegadaTotal, string* categorias, int numeroCategorias, string* marcas, int numeroMarcas) {

    inserirPecasListaDeChegada(armazem, numeroSeccoes, listaChegada, listaChegadaTotal, numeroPecasNovas, categorias, numeroCategorias, marcas, numeroMarcas);
    removerPecasListaDeChegada(armazem, numeroSeccoes, listaChegada, listaChegadaTotal, numeroPecasInseridasSeccao);

}

void inserirPecasListaDeChegada(seccao*& armazem, int numeroSeccoes, peca*& pecasListaDeChegada, int& pecasListaDeChegadaTotal, int numeroPecas, string* categorias, int numeroCategorias, string* marcas, int numeroMarcas) {
    while (numeroPecas) {
        peca novo = criarPeca(marcas, numeroMarcas, categorias, numeroCategorias);
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

void removerPecasListaDeChegada(seccao*& armazem, int numeroSeccoes, peca*& listaDeChegada, int& listaDeChegadaTotal, int numeroPecas){
    int peca = 0;
    int removida = 0;
    while (removida < numeroPecas && peca<listaDeChegadaTotal) {
        for (int i = 0; i < numeroSeccoes; i++) {
            bool podeEntrar = true;
            if (podeEntrar) {
                inserirPeca(armazem[i].listaPecas, armazem[i].numeroPecasSeccao, listaDeChegada[peca]);
                removerPeca(listaDeChegada, listaDeChegadaTotal, peca);
                removida++;
                peca--;
                break;
            }
        }
        peca++;
    }
}

