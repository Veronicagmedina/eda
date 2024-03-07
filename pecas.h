#pragma once

#include <string>
#include "ficheiros.h"
using namespace std;

pecas criarPeca(string*marcas, int numeroMarcas, string*categorias, int numeroCategorias);
void inserirPeca(pecas*& lista, int& tamanho, pecas peca);
void removerPeca(pecas*& lista, int& tamanho, int peca);