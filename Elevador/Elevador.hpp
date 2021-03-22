//
//  Elevador.hpp
//  Elevador
//
//  Created by Marcos Carvalho on 21/03/21.
//
#include <iostream>
using namespace std;

class Elevador
{
public:
    Elevador(int c, int a);
    void entra();
    void sai();
    void sobe();
    void desce();
    void imprimeEstado();
    
private:
    int andarAtual;
    int totalAndares;
    int capacidadeElevador;
    int numeroPesoas;
};
