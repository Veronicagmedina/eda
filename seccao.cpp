#include "struct.h"
#include "seccao.h"

int ID=0;

seccao criarSeccao(string*categorias, int numeroCategorias){
    seccao seccao;
    seccao.categoria=categorias[rand()%numeroCategorias];
    seccao.capacidade= rand() % (capacidadeMaxSeccoes-capacidadeMinSeccoes+1) + capacidadeMinSeccoes;
    seccao.ID = 'A' + ID++;
    return seccao;
}
