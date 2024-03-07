#pragma once
#include <string>
#include<fstream>

using namespace std;

int contarLinhasFicheiro(string ficheiro);
void carregarLinhasFicheiro(string ficheiro, string p[]);
string linhaAleatoria(string* linhas, int numLinhas);


