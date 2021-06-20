//
//  Empregado.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#ifndef Empregado_hpp
#define Empregado_hpp

#include <stdio.h>
#include <iostream>
#include "Pessoa.hpp"
using namespace std;

class Empregado : public Pessoa
{
protected:
    int codigoSetor;
    float imposto;
    float salarioBase;

public:
    Empregado(){};
    Empregado(string n, string e, string t, int c, float sb, float im);
    virtual void calcularSalario();
    int getCodigoSetor();
    float getImposto();
    float getSalarioBase();
    void setCodigoSetor(int c);
    void setImposto(float i);
    void setSalarioBase(float s);
    void atualizar(string e, string t, int c, float sb, float im);
};

#endif /* Empregado_hpp */
