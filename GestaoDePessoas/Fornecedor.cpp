//
//  Fornecedor.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#include "Fornecedor.hpp"
Fornecedor::Fornecedor(string n, string e, string t, float vc, float vd)
{
    nome = n;
    endereco = e;
    telefone = t;
    valorCredito = vc;
    valorDivida = vd;
}

void Fornecedor::obterSaldo()
{
    cout.precision(2);
    cout << "Saldo: R$" << fixed << valorCredito - valorDivida << endl << endl;
}

float Fornecedor::obterValorCredito()
{
    return  valorCredito;
}

float Fornecedor::obterValorDivida()
{
    return valorDivida;
}

void Fornecedor::setValorCredito(float c)
{
    valorCredito = c;
}

void Fornecedor::setValorDivida(float d)
{
    valorDivida = d;
}

void Fornecedor::atualizar(string e, string t, float vc, float vd)
{
    endereco = e == "" ? endereco : e;
    telefone = t == "" ? telefone : t;
    valorCredito = vc == 0 ? valorCredito : vc;
    valorDivida = vd == 0 ? valorDivida : vd;
}

