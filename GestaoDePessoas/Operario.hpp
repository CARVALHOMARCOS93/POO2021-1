//
//  Operario.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#ifndef Operario_hpp
#define Operario_hpp

#include <stdio.h>
#include <iostream>
#include "Empregado.hpp"
using namespace std;

class Operario : public Empregado
{
public:
    Operario(){};
    Operario(string n, string e, string t, int c, float sb, float im, float vp, float cm);
    float getValorProducao();
    float getComissao();
    void setValorProducao(float v);
    void setComissao(float c);
    void calcularSalario();
    void atualizar(string e, string t, int c, float sb, float im, float vp, float cm);
    
private:
    float valorProducao;
    float comissao;
    
};

#endif /* Operario_hpp */
