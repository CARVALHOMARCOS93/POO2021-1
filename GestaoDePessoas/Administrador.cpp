//
//  Administrador.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#include "Administrador.hpp"
Administrador::Administrador(string n, string e, string t, int c, float sb, float im, float ac)
{
    nome = n;
    endereco = e;
    telefone = t;
    codigoSetor = c;
    salarioBase = sb;
    imposto = im;
    ajudaDeCusto = ac;
}

float Administrador::getAjudaDeCusto()
{
    return ajudaDeCusto;
}

void Administrador::setAjudaDeCusto(float a)
{
    ajudaDeCusto = a;
}

void Administrador::calcularSalario()
{
    cout.precision(2);
    cout << "Salário: R$" << fixed << salarioBase - (salarioBase * imposto / 100) + ajudaDeCusto << endl << endl;
}

void Administrador::atualizar(string e, string t, int c, float sb, float im, float ac)
{
    endereco = e == "" ? endereco : e;
    telefone = t == "" ? telefone : t;
    codigoSetor = c == 0 ? codigoSetor : c;
    salarioBase = sb == 0 ? salarioBase : sb;
    imposto = im == 0 ? imposto : im;
    ajudaDeCusto = ac == 0 ? ajudaDeCusto : ac;
}
