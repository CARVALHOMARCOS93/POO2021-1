//
//  ControleRemoto.hpp
//  Televisao
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include <iostream>
#include "Televisao.hpp"
using namespace std;

class ControleRemoto
{
private:
    Televisao televisao;
public:
    ControleRemoto(){};
    void diminuirVolume();
    void aumentarVolume();
    void diminuirCanal();
    void aumentarCanal();
    void trocarCanal(int c);
    void imprimirEstado();
    void ligaDesliga();
};
