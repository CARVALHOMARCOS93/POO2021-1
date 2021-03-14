//
//  main.cpp
//  Carros
//
//  Created by Marcos Carvalho on 13/03/21.
//

#include <iostream>
#include "Carro.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Carro carro1("Ford Ka", "Branco", "XXX-1234", 2, 2011);
    
    cout << carro1.toString();
    
    carro1.ligar();
    carro1.acelerar();
    carro1.ligar();
    carro1.desligar();
    carro1.desligar();
    carro1.acelerar();
    
    carro1.ligar();
    carro1.frear();
    carro1.frear();
    carro1.acelerar();
    carro1.frear();
    
    cout << carro1.getEstadoCarro();
    
    carro1.desligar();
    carro1.setCor("Rosa");
    carro1.setPlaca("XYZ-5555");
    
    cout << carro1.toString();
    
    return 0;
}
