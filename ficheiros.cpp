#include "ficheiros.h"

int contarLinhasFicheiro(string ficheiro) {
    ifstream file;
    file.open(ficheiro, ios::in);
    int numeroLinhas = 0;
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            numeroLinhas++;
        }
    }
    return numeroLinhas;
}
void carregarLinhasFicheiro(string ficheiro, string* p) {
    ifstream file;
    int i = 0;
    file.open(ficheiro, ios::in);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            p[i] = line;
            i++;
        }
    }
    file.close();
}

string linhaAleatoria(string* linhas, int numLinhas){
    return linhas[rand()%numLinhas];
}



