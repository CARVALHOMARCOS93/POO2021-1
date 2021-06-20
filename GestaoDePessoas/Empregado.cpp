//
//  Empregado.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#include "Empregado.hpp"
Empregado::Empregado(string n, string e, string t, int c, float sb, float im)
{
    nome = n;
    endereco = e;
    telefone = t;
    codigoSetor = c;
    salarioBase = sb;
    imposto = im;
}

void Empregado::calcularSalario()
{
    cout.precision(2);
    cout << "Salário: R$" << fixed << salarioBase - (salarioBase * imposto / 100) << endl << endl;
}

int Empregado::getCodigoSetor()
{
    return codigoSetor;
}

float Empregado::getImposto()
{
    return imposto;
}

void Empregado::setCodigoSetor(int c)
{
    codigoSetor = c;
}

void Empregado::setImposto(float i)
{
    imposto = i;
}

void Empregado::setSalarioBase(float s)
{
    salarioBase = s;
}

float Empregado::getSalarioBase()
{
    return salarioBase;
}

void Empregado::atualizar(string e, string t, int c, float sb, float im)
{
    endereco = e == "" ? endereco : e;
    telefone = t == "" ? telefone : t;
    codigoSetor = c == 0 ? codigoSetor : c;
    salarioBase = sb == 0 ? salarioBase : sb;
    imposto = im == 0 ? imposto : im;
}
