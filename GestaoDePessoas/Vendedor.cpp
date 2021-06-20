//
//  Vendedor.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 14/06/21.
//

#include "Vendedor.hpp"
Vendedor::Vendedor(string n, string e, string t, int c, float sb, float im, float vv, float cm)
{
    nome = n;
    endereco = e;
    telefone = t;
    codigoSetor = c;
    salarioBase = sb;
    imposto = im;
    valorVendas = vv;
    comissao = cm;
}
float Vendedor::getValorVendas()
{
    return valorVendas;
}

float Vendedor::getComissao()
{
    return comissao;
}

void Vendedor::setValorVendas(float v)
{
    valorVendas = v;
}

void Vendedor::setComissao(float c)
{
    comissao = c;
}

void Vendedor::calcularSalario()
{
    cout.precision(2);
    cout << "Salário: R$" << fixed << salarioBase - (salarioBase * imposto/100) + (valorVendas * comissao / 100) << endl << endl;
}

void Vendedor::atualizar(string e, string t, int c, float sb, float im, float vv, float cm)
{
    endereco = e == "" ? endereco : e;
    telefone = t == "" ? telefone : t;
    codigoSetor = c == 0 ? codigoSetor : c;
    salarioBase = sb == 0 ? salarioBase : sb;
    imposto = im == 0 ? imposto : im;
    valorVendas = vv == 0 ? valorVendas : vv;
    comissao = cm == 0 ? comissao : cm;
}
