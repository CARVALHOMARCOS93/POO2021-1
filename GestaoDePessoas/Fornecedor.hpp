//
//  Fornecedor.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include <stdio.h>
#include <iostream>
#include "Pessoa.hpp"
using namespace std;

class Fornecedor : public Pessoa
{
public:
    Fornecedor(string n, string e, string t, float vc, float vd);
    void obterSaldo();
    float obterValorCredito();
    float obterValorDivida();
    void setValorCredito(float c);
    void setValorDivida(float d);
    void atualizar(string e, string t, float vc, float vd);
private:
    float valorCredito;
    float valorDivida;
};

#endif /* Fornecedor_hpp */
