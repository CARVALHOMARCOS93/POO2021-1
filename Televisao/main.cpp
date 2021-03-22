//
//  main.cpp
//  Televisao
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include <iostream>
#include "ControleRemoto.hpp"

int main(int argc, const char * argv[]) {
    ControleRemoto controle;
    
    controle.imprimirEstado();
    controle.aumentarCanal();
    controle.diminuirVolume();
    controle.ligaDesliga();
    controle.trocarCanal(10);
    controle.aumentarVolume();
    controle.imprimirEstado();
    controle.ligaDesliga();
    controle.imprimirEstado();
    return 0;
}
