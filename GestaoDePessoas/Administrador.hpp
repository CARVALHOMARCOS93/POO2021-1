//
//  Administrador.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#ifndef Administrador_hpp
#define Administrador_hpp

#include <stdio.h>
#include <iostream>
#include "Empregado.hpp"
using namespace std;

class Administrador : public Empregado
{
public:
    Administrador(){};
    Administrador(string n, string e, string t, int c, float sb, float im, float ac);
    float getAjudaDeCusto();
    void setAjudaDeCusto(float a);
    void calcularSalario();
    void atualizar(string e, string t, int c, float sb, float im, float ac);
    
private:
    float ajudaDeCusto;
    
};
#endif /* Administrador_hpp */
