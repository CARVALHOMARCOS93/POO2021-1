//
//  Televisao.hpp
//  Televisao
//
//  Created by Marcos Carvalho on 21/03/21.
//
#include <stdio.h>
#include <iostream>
using namespace std;

class Televisao
{
private:
    bool ligado;
    int volume;
    int canal;
public:
    Televisao();
    int getVolume();
    void aumentaVolume();
    void diminuiVolume();
    int getCanal();
    void setCanal(int c);
    void imprimeEstado();
    void setLigaDesliga();
};
