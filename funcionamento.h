#pragma once
#include "struct.h"
#include "constantes.h"

#include<iostream>
#include<string>
#include <fstream>

using namespace std;

void seguinte(seccao*& armazem, int numeroSeccoes, peca*& listaChegada, int& listaChegadaTotal, string* categorias, int numeroCategorias, string* marcas, int numeroMarcas);
void inserirPecasListaDeChegada(seccao*& armazem, int numeroSeccoes, peca*& pecasListaDeChegada, int& pecasListaDeChegadaTotal, int numeroPecas, string* categorias, int numeroCategorias, string* marcas, int numeroMarcas);
void removerPecasListaDeChegada(seccao*& armazem, int numeroSeccoes, peca*& pecasListaDeChegada, int& pecasListaDeChegadaTotal, int numeroPecasInseridasSeccao);




