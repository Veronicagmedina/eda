#include <iostream>
#include<string>
#include<time.h>
#include <stdlib.h>

#include "constantes.h"
#include "struct.h"

using namespace std;

int main() {
    locale::global(locale(""));

    srand(time(NULL));

    int numeroMarca = contarLinhasFicheiro("marcas.txt");
    string* marcas = new string[numeroMarca];

    int numeroCategoria = contarLinhasFicheiro("categorias.txt");
    string* categorias = new string[numeroCategoria];

    carregarLinhasFicheiro("marcas.txt", marcas);
    carregarLinhasFicheiro("categorias.txt", categorias);

    pecas* pecasListaDeChegada = new pecas[0]; //Criar/alocar memoria para a fila/lista de espera
    int pecasListaDeChegadaTotal = 0; //Iniciar a variável do tamanho da fila de espera


    int numeroSeccoes = rand() % (numeroMaxSeccoes-numeroMinSeccoes+1) + numeroMinSeccoes; //Atribuir o valor do numero de seccoes entre 7 a 10


    seccao* oficina = new seccao[numeroSeccoes]; //Criar/alocar memoria para o arrays das secçoes

    criarSeccao(categorias, numeroCategorias);
    inserirCarrosFilaDeEspera(oficina, numeroSeccoes, pecasListaDeChegada, pecasListaDeChegadaTotal, numeroPecasNovas, modelos, numeroModelo, marcas, numeroMarca);

    bool sair = false;
    char opcao;
    do
    {
        mostraOficina(numeroSeccoes, oficina);
        mostraFilaDeEspera(pecasListaDeChegada, pecasListaDeChegadaTotal);
        cout << "\nDia (s)eguinte *********** (g)estão\n" << endl;
        cout << "Seleccione a sua opção:";
        cin >> opcao;
        switch (opcao) {
            case 's':
                seguinte(oficina, numeroSeccoes, pecasListaDeChegada, pecasListaDeChegadaTotal, categorias, numeroCategoria, marcas, numeroMarca);

                break;
            case 'g':
                opcoes(oficina, numeroSeccoes, pecasListaDeChegada, pecasListaDeChegadaTotal, categorias, numeroCategoria, marcas, numeroMarca);
                break;
            default:
                break;
        }
    } while (true);

    return 0;
}


//int numeroSeccoes = rand() % (numeroMaxSeccoes-numeroMinSeccoes+1) + numeroMinSeccoes;
