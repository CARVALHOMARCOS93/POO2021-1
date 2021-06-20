//
//  Vendedor.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 14/06/21.
//

#ifndef Vendedor_hpp
#define Vendedor_hpp

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include "Empregado.hpp"
using namespace std;

class Vendedor : public Empregado
{
public:
    Vendedor(){};
    Vendedor(string n, string e, string t, int c, float sb, float im, float vv, float cm);
    float getValorVendas();
    float getComissao();
    void setValorVendas(float v);
    void setComissao(float c);
    void calcularSalario();
    void atualizar(string e, string t, int c, float sb, float im, float vv, float cm);
    
private:
    float valorVendas;
    float comissao;
    
};
#endif /* Vendedor_hpp */
