//
//  main.cpp
//  Elevador
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include <iostream>
#include "Elevador.hpp"

int main(int argc, const char * argv[]) {
    Elevador elevador(3, 5);
    elevador.imprimeEstado();
    
    elevador.sai();
    elevador.desce();
    
    elevador.entra();
    elevador.sobe();
    elevador.imprimeEstado();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    
    elevador.entra();
    elevador.entra();
    elevador.entra();
    
    elevador.imprimeEstado();
    
    elevador.desce();
    elevador.sai();
    
    elevador.imprimeEstado();
    return 0;
}
