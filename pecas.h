#pragma once

#include <string>
#include "ficheiros.h"
using namespace std;

peca criarPeca(string*marcas, int numeroMarcas, string*categorias, int numeroCategorias);
void inserirPeca(peca*& lista, int& tamanho, peca peca);
void removerPeca(peca*& lista, int& tamanho, int peca);