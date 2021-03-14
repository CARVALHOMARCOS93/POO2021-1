//
//  JogoDaVelha.hpp
//  JogoDaVelha
//
//  Created by Marcos Carvalho on 13/03/21.
//
#include <stdio.h>
using namespace std;

class JogoDaVelha{
private:
    char tabuleiro[3][3] = {{'#', '#', '#'},{'#', '#', '#'},{'#', '#', '#'}};
    
public:
    JogoDaVelha(){};
    void imprimeGrade();
    bool jogar(char c, int x, int y);
    bool acabaJogo(char c);
};

