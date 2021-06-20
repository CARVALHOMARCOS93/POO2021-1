//
//  Operario.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#include "Operario.hpp"
Operario::Operario(string n, string e, string t, int c, float sb, float im, float vp, float cm)
{
    nome = n;
    endereco = e;
    telefone = t;
    codigoSetor = c;
    salarioBase = sb;
    imposto = im;
    valorProducao = vp;
    comissao = cm;
}
float Operario::getValorProducao()
{
    return valorProducao;
}

float Operario::getComissao()
{
    return comissao;
}

void Operario::setValorProducao(float v)
{
    valorProducao = v;
}

void Operario::setComissao(float c)
{
    comissao = c;
}

void Operario::calcularSalario()
{
    cout.precision(2);
    cout << "Salário: R$" << fixed << salarioBase - (salarioBase * imposto/100) + (valorProducao * comissao / 100) << endl << endl;
}

void Operario::atualizar(string e, string t, int c, float sb, float im, float vp, float cm)
{
    endereco = e == "" ? endereco : e;
    telefone = t == "" ? telefone : t;
    codigoSetor = c == 0 ? codigoSetor : c;
    salarioBase = sb == 0 ? salarioBase : sb;
    imposto = im == 0 ? imposto : im;
    valorProducao = vp == 0 ? valorProducao : vp;
    comissao = cm == 0 ? comissao : cm;
}
