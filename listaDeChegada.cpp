#include <iostream>
#include <string>
#include "ficheiros.h"
#include "struct.h"
//Le-PecasListaDeChegada, T-total
using namespace std;

void criarPeca(int numeroPecas, string* marcas, pecas* pecas, string* categorias) {
    for (int i = 0; i < numeroPecas; i++) {

        pecas[i].marca = *(marcas + rand() % lerLinhasFicheiro("marcas.txt"));
        pecas[i].categoria = *(categorias + rand() % lerLinhasFicheiro("categorias.txt"));
    }
}

void inserirPeca(pecas* pecasListaDeChegada, int* pecasListaDeChegadaTotal, int numeroPecas, pecas* novasPecas) {
    int p = 0;
    for (int i = *pecasListaDeChegadaTotal; i < numeroPecas + *pecasListaDeChegadaTotal; i++) {
        if (i == 0) {
            pecasListaDeChegada[0] = novasPecas[0];
        }
        else if (i > 0) {
            for (int j = i - 1; j > -1; j--) {
                if (novasPecas[p].categoria.compare(pecasListaDeChegada[j].categoria) == 0) {
                    if (i == 1) {
                        pecasListaDeChegada[i] = novasPecas[p];
                    }
                    else {
                        for (int k = i; k > j; k--) {
                            pecasListaDeChegada[k] = pecasListaDeChegada[k - 1];
                            if (novasPecas[p].categoria.compare(pecasListaDeChegada[k - 1].categoria) == 0) {
                                pecasListaDeChegada[k - 1] = novasPecas[p];
                            }
                        }
                        break;
                    }
                }
                else {
                    pecasListaDeChegada[i] = novasPecas[p];
                }
            }
        }
        p++;
    }
    pecasListaDeChegadaTotal = pecasListaDeChegadaTotal + numeroPecas;
}

void mostrarListaDeChegada(pecas* pecasListaDeChegada, int* pecasListaDeChegadaTotal) {
    cout << "Lista de Chegada: " << endl;
    for (int i = 0; i < *pecasListaDeChegadaTotal; i++) {
        cout << "Peça: " << pecasListaDeChegada[i].marca << " " << pecasListaDeChegada[i].categoria << "Identificador: " << endl;
    }
}
